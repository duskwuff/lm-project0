#include <stdio.h>
#include <stdint.h>
#include <romlib.h>

#include <hw/memmap.h>
#include <hw/pinmap.h>


#include "sd.h"

typedef int bool;

int main(void)
{
    sd_init();

    sd_card_init();


    puts("Okay, I'm done for now\n\n");
    return 0;
}

