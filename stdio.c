#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include <ti/hw_types.h>
#include <ti/hw_memmap.h>

#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <driverlib/uart.h>
#include <driverlib/rom.h>

#define FIELD_LEFT_JUSTIFY      (1UL << 0)
#define FIELD_ALWAYS_SIGNED     (1UL << 1)
#define FIELD_ZERO_PADDED       (1UL << 2)
#define FIELD_LOWERCASE         (1UL << 3)
#define FIELD_UNSIGNED          (1UL << 4)
#define FIELD_16BIT             (1UL << 5)

int putchar(int ch)
{
    ROM_UARTCharPut(UART0_BASE, ch);
    return ch;
}

static int output_string(const char *str)
{
    int n = 0;
    char ch;
    while ((ch = str[n++]) != 0)
        putchar(ch);
    return n;
}

int puts(const char *str)
{
    (void) output_string(str);
    putchar('\n');
    return 1;
}

static const char digits[] = "0123456789ABCDEF";

static void write_int(unsigned int i, int base, int flags, int width)
{
    char buf[16];
    int bp = sizeof(buf);
    buf[--bp] = 0;

    int was_negative = 0;
    if (!(flags & FIELD_UNSIGNED)) {
        int si = i; // Nasty, but it works!
        if (si < 0) {
            i = -si;
            was_negative = 1;
        }
    }

    if (flags & FIELD_16BIT)
        i &= 0xffff;

    if (i == 0) {
        buf[--bp] = '0';
    } else {
        while (i > 0) {
            int digit = i % base;
            i /= base;
            char ch = digits[digit];
            if (flags & FIELD_LOWERCASE) ch |= 0x20;
            buf[--bp] = ch;
        }
    }

    int len = sizeof(buf) - bp - 1;
    int needs_sign = was_negative || (flags & FIELD_ALWAYS_SIGNED);
    if (needs_sign) len++;

    if (!(flags & (FIELD_LEFT_JUSTIFY | FIELD_ZERO_PADDED))) {
        while (len < width) {
            putchar(' ');
            len++;
        }
    }

    if(needs_sign)
        putchar(was_negative ? '-' : '+');

    if (flags & FIELD_ZERO_PADDED)
        while (len < width) {
            putchar('0');
            len++;
        }

    output_string(&buf[bp]);

    while (len < width) {
        putchar(' ');
        len++;
    }
}

static void write_string(const char *s, int flags, int width)
{
    if (flags & FIELD_LEFT_JUSTIFY)
        output_string(s);

    size_t len = strlen(s);
    while (len < width) {
        putchar(' ');
        len++;
    }

    if (!(flags & FIELD_LEFT_JUSTIFY))
        output_string(s);
}

int printf(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);

    char ch;
    while ((ch = *fmt++) != 0) {
        if (ch != '%') {
            putchar(ch);
            continue;
        }

        int flags = 0;
        int width = 0;
        char cbuf[2] = {0};

        while ((ch = *fmt++) != 0) {
            switch(ch) {

                case '%':
                    putchar(ch);
                    break;

                case '-':
                    flags |= FIELD_LEFT_JUSTIFY;
                    continue;
                case '+':
                    flags |= FIELD_ALWAYS_SIGNED;
                    continue;

                case '0':
                    if (width == 0) {
                        flags |= FIELD_ZERO_PADDED;
                        continue;
                    }
                case '1' ... '9':
                    width = 10 * width + ch - '0';
                    continue;
                case '*':
                    width = va_arg(ap, int);
                    continue;

                case 'h':
                    flags |= FIELD_16BIT;
                    continue;

                case 'z':
                case 'l':
                case 't':
                    // All no-ops here (no support for 64-bit %lld)
                    continue;

                case 'c':
                    cbuf[0] = va_arg(ap, int);
                    write_string(cbuf, flags, width);
                    break;
                case 'd':
                    write_int(va_arg(ap, int), 10, flags, width);
                    break;
                case 'u':
                    write_int(va_arg(ap, int), 10, flags | FIELD_UNSIGNED, width);
                    break;
                case 'o':
                    write_int(va_arg(ap, int), 8, flags | FIELD_UNSIGNED, width);
                    break;
                case 'x':
                    flags |= FIELD_LOWERCASE;
                case 'X':
                    write_int(va_arg(ap, int), 16, flags | FIELD_UNSIGNED, width);
                    break;
                case 's':
                    write_string(va_arg(ap, const char *), flags, width);
                    break;
            }
            break;
        }
    }

    va_end(ap);
    return 1; // FIXME
}

