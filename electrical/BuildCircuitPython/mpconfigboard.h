#define MICROPY_HW_BOARD_NAME "Adafruit Feather M4 Express"
#define MICROPY_HW_MCU_NAME "samd51j19"

#define CIRCUITPY_MCU_FAMILY samd51

// Rev E

// #define MICROPY_HW_LED_STATUS   (&pin_PA23)
// #define MICROPY_HW_NEOPIXEL (&pin_PB03)

#define BOARD_HAS_CRYSTAL 1

// #define CIRCUITPY_DEFAULT_STACK_SIZE  (1062) // divisible by 8
// #define CIRCUITPY_INTERNAL_NVM_SIZE (8192)
#define CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_SIZE (FLASH_SIZE / 2 - CIRCUITPY_INTERNAL_NVM_SIZE - CIRCUITPY_DEFAULT_STACK_SIZE)

#define DEFAULT_I2C_BUS_SCL (&pin_PA13)
#define DEFAULT_I2C_BUS_SDA (&pin_PA12)

#define DEFAULT_SPI_BUS_SCK (&pin_PA17)
#define DEFAULT_SPI_BUS_MOSI (&pin_PB23)
#define DEFAULT_SPI_BUS_MISO (&pin_PB22)

#define DEFAULT_UART_BUS_RX (&pin_PB17)
#define DEFAULT_UART_BUS_TX (&pin_PB16)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
