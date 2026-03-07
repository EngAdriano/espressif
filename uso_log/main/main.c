#include <stdio.h>
#include "esp_log.h"

void app_main(void)
{
    int valor = 0;
    ESP_LOGE("LOG1", "LOG DE ERRO %d", valor++);  // LOG DE ERRO/ERROR  
    ESP_LOGW("LOG1", "LOG DE WARNING/AVISO %d", valor++); // LOG DE AVISO/WARNING
    ESP_LOGI("LOG1", "LOG DE INFORMAÇÃO %d", valor++); // LOG DE INFORMAÇÃO/INFO
    ESP_LOGD("LOG1", "LOG DE DEBUG %d", valor++); // LOG DE DEBUG/DEBUG
    ESP_LOGV("LOG1", "LOG DE TEXT COMUM/VERBOSE %d", valor++); // LOG DE TEXT COMUM/VERBOSE

    esp_log_level_set("LOG2", ESP_LOG_WARN); // Define o nível de log para LOG2 como WARNING
    ESP_LOGE("LOG2", "LOG DE ERRO %d", valor++);  // LOG DE ERRO/ERROR  
    ESP_LOGW("LOG2", "LOG DE WARNING/AVISO %d", valor++); // LOG DE AVISO/WARNING
    ESP_LOGI("LOG2", "LOG DE INFORMAÇÃO %d", valor++); // LOG DE INFORMAÇÃO/INFO
    ESP_LOGD("LOG2", "LOG DE DEBUG %d", valor++); // LOG DE DEBUG/DEBUG
    ESP_LOGV("LOG2", "LOG DE TEXT COMUM/VERBOSE %d", valor++); // LOG DE TEXT COMUM/VERBOSE
}
