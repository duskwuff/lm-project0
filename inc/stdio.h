/*
 * stdio.h
 *
 * Copyright (c) 2012 Dusk Wuff (dusk@woofle.net).
 *
 * To the extent possible under law, the author has dedicated all copyright and
 * related and neighboring rights to this software to the public domain
 * worldwide. This software is distributed without any warranty.
 */

#ifndef _STDIO_H_
#define _STDIO_H_

#include <stdarg.h>

int getchar(void);
int putchar(int);

int printf(const char *, ...)
    __attribute__(( format (printf, 1, 2) ));
int sprintf(char *, const char *, ...)
    __attribute__(( format (printf, 2, 3) ));
int vprintf(const char *, va_list)
    __attribute__(( format (printf, 1, 0) ));
int vsprintf(char *, const char *, va_list)
    __attribute__(( format (printf, 2, 0) ));
int puts(const char *);

#endif // _STDIO_H_
