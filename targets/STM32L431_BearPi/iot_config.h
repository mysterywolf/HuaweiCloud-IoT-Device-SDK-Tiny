#define CONFIG_ARCH_CPU_TYPE "armv7-m"
#define CONFIG_UARTAT_RCVMAX 2048
#define CONFIG_UARTAT_BAUDRATE 115200
#define CONFIG_UARTAT_DEVNAME "atdev"
#define CONFIG_LITEOS_ENABLE 1
#define CONFIG_AT_ENABLE 1
#define CONFIG_AT_DEVNAME "atdev"
#define CONFIG_AT_OOBTABLEN 6
#define CONFIG_AT_RECVMAXLEN 1024
#define CONFIG_AT_TASKPRIOR 10
#define CONFIG_CJSON_ENABLE 1
#define CONFIG_DRIVER_ENABLE 1
#define CONFIG_LINKLOG_ENABLE 1
#define CONFIG_LINKQUEUE_ENABLE 1
#define CONFIG_LINKDEMO_ENABLE 1
#define CONFIG_STIMER_ENABLE 1
#define CONFIG_STIMER_STACKSIZE 2048
#define CONFIG_STIMER_TASKPRIOR 10
#define CONFIG_OTA_ENABLE 1
#define CONFIG_OTA_VERSIONLEN 32
#define CONFIG_OTA_IMG_DEMO 1
#define CONFIG_OTA_IMG_NULL 1
#define CONFIG_TCPIP_AL_ENABLE 1
#define CONFIG_ESP8266_ENABLE 1
#define CONFIG_ESP8266_SSID "IoTdebug"
#define CONFIG_ESP8266_PWD "IoTdebug"
#define CONFIG_ESP8266_RCVCACHE 1024
#define CONFIG_ESP8266_CMDTIMEOUT 2000
#define CONFIG_DTLS_AL_ENABLE 1
#define CONFIG_MBEDTLS_ENABLE 1
#define CONFIG_MBEDTLS_CERT 1
#define CONFIG_MBEDTLS_CERT_PSK 1
#define CONFIG_MQTT_AL_ENABLE 1
#define CONFIG_PAHO_MQTT 1
#define CONFIG_PAHO_CONNECT_TIMEOUT 10000
#define CONFIG_PAHO_CMD_TIMEOUT 10000
#define CONFIG_PAHO_LOOPTIMEOUT 10
#define CONFIG_PAHO_SNDBUF_SIZE 2048
#define CONFIG_PAHO_RCVBUF_SIZE 2048
#define CONFIG_OCSERVICES_ENABLE 1
#define CONFIG_OCMQTT_ENABLE 1
#define CONFIG_OC_MQTT_V5 1
#define CONFIG_OC_TINYMQTTV5_ENABLE 1
#define CONFIG_OC_MQTTV5_PROFILE 1
#define CONFIG_SHELL_ENABLE 1
#define CONFIG_SHELL_TASK_STACKSIZE 2048
#define CONFIG_SHELL_TASK_PRIOR 10
#define CONFIG_IOT_LINK_CONFIGFILE "iot_config.h"
#define CONFIG_Demo_OC_MQTT 1
#define CONFIG_APP_SERVERIP "121.36.42.100"
#define CONFIG_APP_SERVERPORT "1883"
#define CONFIG_APP_DEVICEID "5f5746605d28ab02bdb4a00f_demoTest"
#define CONFIG_APP_DEVICEPWD "012345678"
#define CONFIG_APP_LIFETIME 100
#define CONFIG_USER_DEMO "oc_mqtt_demo"
