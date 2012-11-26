extern uint8_t sdbuf[512];
uint8_t SPIxfer(int send);
int doCardCommand(uint8_t cmd, uint32_t arg, uint8_t crc);
void SPIreaddata(int len);
void sd_init(void);
void sd_card_init(void);
