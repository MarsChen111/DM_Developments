//
// Created by 34283 on 2026/11/9.
//
#include <spi.h>

void SPI_Send_Byte(uint8_t data) {

    HAL_SPI_Transmit(&hspi6, (uint8_t*) &data, 1, HAL_MAX_DELAY);
    

}