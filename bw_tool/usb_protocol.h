

#define BINSTART 1
#define USB_RESPONSE  0x80

enum usb_cmds  {
  USB_CMD_SPI_TX = 0x10, 
  USB_CMD_SPI_TXRX, 
  USB_CMD_SPI_SPEED, 
  USB_CMD_SPI_DELAY, 
  USB_CMD_I2C_TXRX = 0x20, 
  USB_CMD_FWD = 0x30,
};
