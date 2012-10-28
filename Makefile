CROSS = arm-none-eabi-
CC = ${CROSS}gcc
LD = ${CROSS}ld
OBJCOPY = ${CROSS}objcopy
LM4FLASH = lm4flash

CPUFLAGS += -mthumb -mcpu=cortex-m4 \
	    -mfpu=fpv4-sp-d16 -mfloat-abi=softfp

CFLAGS = ${CPUFLAGS} -Os -std=gnu99 -Wall \
	 -DPART_LM4F120H5QR -DTARGET_IS_BLIZZARD_RA2 \
	 -Iinc
LDFLAGS = -T stellaris.ld

TARGET = hello
OBJECTS = startup.o hello.o
LIBS =

default: $(TARGET).bin

prog: $(TARGET).bin
	lm4flash -v $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) -O binary $< $@

$(TARGET).elf: $(OBJECTS)
	$(LD) $(LDFLAGS) $+ $(LIBS) -o $@

clean:
	rm -f $(TARGET).bin $(TARGET).elf $(OBJECTS)

.PHONY: default clean prog
