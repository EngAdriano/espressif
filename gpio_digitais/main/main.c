#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_GPIO GPIO_NUM_48

void app_main(void)
{
    gpio_config_t led_conf = {
        .pin_bit_mask = (1ULL << LED_GPIO),
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&led_conf);

    while (1) {
        gpio_set_level(LED_GPIO, 1); // Turn on the LED
        printf("LED ON\n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // Wait for 1 second
        gpio_set_level(LED_GPIO, 0); // Turn off the LED
        printf("LED OFF\n");
        vTaskDelay(pdMS_TO_TICKS(1000)); // Wait for 1 second
    }
}
