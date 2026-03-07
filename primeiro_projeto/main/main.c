#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "driver/gpio.h"

#define PIN 48

void app_main(void)
{
    esp_rom_gpio_pad_select_gpio(PIN);
    gpio_set_direction(PIN, GPIO_MODE_OUTPUT);

    bool status = 0;

    while (true)
    {
        status = !status;
        gpio_set_level(PIN, status);
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        if(status)
        {
            printf("Ligada\n");
        }
        else
        {
            printf("Desligado\n");
        }
    }
}
