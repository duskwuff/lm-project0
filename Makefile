CROSS = arm-none-eabi-
AS = ${CROSS}as
CC = ${CROSS}gcc
OBJCOPY = ${CROSS}objcopy
LM4FLASH = lm4flash

CPUFLAGS += -mthumb -mcpu=cortex-m4 \
	    -mfpu=fpv4-sp-d16 -mfloat-abi=softfp

ASFLAGS = ${CPUFLAGS}
CFLAGS = ${CPUFLAGS} -Os -std=gnu99 -Wall -ggdb \
	 -DPART_LM4F120H5QR -DTARGET_IS_BLIZZARD_RA2 \
	 -ffunction-sections -fdata-sections \
	 -Iinc
LDFLAGS = -T stellaris.ld -nostdlib

TARGET = main
OBJECTS = startup.o main.o stdio.o string.o sd.o
LIBS =

default: $(TARGET).bin

prog: $(TARGET).bin
	lm4flash -v $<

console:
	picocom -b 115200 --imap lfcrlf /dev/tty.usbmodem0E1014E1

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) -O binary $< $@

$(TARGET).elf: $(OBJECTS)
	$(CC) $(LDFLAGS) $+ $(LIBS) -o $@

clean:
	rm -f $(TARGET).bin $(TARGET).elf $(OBJECTS)

.PHONY: default clean prog
