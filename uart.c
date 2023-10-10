#include <stdint>
#include "uart.h"

#define GPIOAEN     (1U<<0)
#define UART2EN     (1U<<17)

#define DBG_UART_BAUDRATE   115200
#define SYS_FREQ            16000000
#define APB1_CLK            SYS_FREQ
#define CR1_TE              (1U<<3)
#define CR1_UE              (1U<<13)
#define SR_TXE              (1U<<7)

void debug_uart_init(void)
{
    RCC->AHB1ENR |= GPIOAEN;
    // I didn't type all the rest of it..
}


void dma_uart_unit(void)
{
    // just dma function for git tutorial.
}