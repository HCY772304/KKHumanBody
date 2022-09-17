// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_ZNET_CONFIG
#define SILABS_ZNET_CONFIG


/**** Included Header Section ****/



// Networks
#define EM_AF_GENERATED_NETWORK_TYPES { \
  EM_AF_NETWORK_TYPE_ZIGBEE_PRO, /* Primary */ \
}
#define EM_AF_GENERATED_ZIGBEE_PRO_NETWORKS { \
  { \
    /* Primary */ \
    ZA_END_DEVICE, \
    EMBER_AF_SECURITY_PROFILE_Z3, \
  }, \
}
#define EM_AF_GENERATED_NETWORK_STRINGS  \
  "Primary (pro)", \
/**** ZCL Section ****/
#define ZA_PROMPT "KKHumanBody"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_OTA_BOOTLOAD_CLUSTER_CLIENT
#define ZCL_USING_IAS_ZONE_CLUSTER_SERVER
#define ZCL_USING_DIAGNOSTICS_CLUSTER_SERVER
#define ZCL_USING_OPT_TUNNEL_CLUSTER_CLIENT
#define ZCL_USING_OPT_TUNNEL_CLUSTER_SERVER
/**** Optional Attributes ****/
#define ZCL_USING_BASIC_CLUSTER_APPLICATION_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_STACK_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_HW_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MANUFACTURER_NAME_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MODEL_IDENTIFIER_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_DATE_CODE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_GENERIC_DEVICE_CLASS_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_GENERIC_DEVICE_TYPE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_PRODUCT_CODE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_PRODUCT_URL_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_SW_BUILD_ID_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_RESET_REASON_ATTRIBUTE 
#define ZCL_USING_DIAGNOSTICS_CLUSTER_LAST_MESSAGE_LQI_ATTRIBUTE 
#define ZCL_USING_DIAGNOSTICS_CLUSTER_LAST_MESSAGE_RSSI_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_OPT_DATA_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_MTO_RR_RspRandom_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_AssociatedAnnounce_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_CMEI_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_ISN_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_InstallCode_ATTRIBUTE 
#define ZCL_USING_OPT_TUNNEL_CLUSTER_CHUNK_N1_ATTRIBUTE 
#define EMBER_AF_MANUFACTURER_CODE 0x1268
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_CONDITIONAL

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_OTA_BOOTLOAD_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_IAS_ZONE_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_DIAGNOSTICS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_OPT_TUNNEL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_OPT_TUNNEL_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** Cluster Endpoint Summaries ****/
#define EMBER_AF_MAX_SERVER_CLUSTER_COUNT (5)
#define EMBER_AF_MAX_CLIENT_CLUSTER_COUNT (2)
#define EMBER_AF_MAX_TOTAL_CLUSTER_COUNT (7)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI
#define EMBER_COMMAND_INTEPRETER_HAS_DESCRIPTION_FIELD

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_Z3

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_ZC_AND_ZR_DEVICE_COUNT (0)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_END_DEVICE_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/**** Callback Section ****/
#define EMBER_CALLBACK_HAL_BUTTON_ISR
#define EMBER_CALLBACK_STACK_STATUS
#define EMBER_CALLBACK_MAIN_INIT
#define EMBER_CALLBACK_MSG_SENT
#define EMBER_CALLBACK_PRE_CMD
#define EMBER_CALLBACK_PRE_MESSAGE_SEND
#define EMBER_CALLBACK_PRE_ZDO
#define EMBER_CALLBACK_OCCUPANCY_STATE_CHANGED
#define EMBER_CALLBACK_BASIC_CLUSTER_BASIC_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_EEPROM_INIT
#define EMBER_CALLBACK_EEPROM_NOTE_INITIALIZED_STATE
#define EMBER_CALLBACK_EEPROM_SHUTDOWN
#define EMBER_CALLBACK_POLL_COMPLETE
#define EMBER_APPLICATION_HAS_POLL_COMPLETE_HANDLER
#define EMBER_CALLBACK_PRE_NCP_RESET
#define EMBER_CALLBACK_EZSP_POLL_COMPLETE
#define EZSP_APPLICATION_HAS_POLL_COMPLETE_HANDLER
#define EMBER_CALLBACK_ADD_TO_CURRENT_APP_TASKS
#define EMBER_CALLBACK_REMOVE_FROM_CURRENT_APP_TASKS
#define EMBER_CALLBACK_GET_CURRENT_APP_TASKS
#define EMBER_CALLBACK_GET_LONG_POLL_INTERVAL_MS
#define EMBER_CALLBACK_GET_LONG_POLL_INTERVAL_QS
#define EMBER_CALLBACK_SET_LONG_POLL_INTERVAL_MS
#define EMBER_CALLBACK_SET_LONG_POLL_INTERVAL_QS
#define EMBER_CALLBACK_GET_SHORT_POLL_INTERVAL_MS
#define EMBER_CALLBACK_GET_SHORT_POLL_INTERVAL_QS
#define EMBER_CALLBACK_SET_SHORT_POLL_INTERVAL_MS
#define EMBER_CALLBACK_SET_SHORT_POLL_INTERVAL_QS
#define EMBER_CALLBACK_GET_CURRENT_POLL_INTERVAL_MS
#define EMBER_CALLBACK_GET_CURRENT_POLL_INTERVAL_QS
#define EMBER_CALLBACK_GET_WAKE_TIMEOUT_MS
#define EMBER_CALLBACK_GET_WAKE_TIMEOUT_QS
#define EMBER_CALLBACK_SET_WAKE_TIMEOUT_MS
#define EMBER_CALLBACK_SET_WAKE_TIMEOUT_QS
#define EMBER_CALLBACK_GET_WAKE_TIMEOUT_BITMASK
#define EMBER_CALLBACK_SET_WAKE_TIMEOUT_BITMASK
#define EMBER_CALLBACK_GET_CURRENT_POLL_CONTROL
#define EMBER_CALLBACK_GET_DEFAULT_POLL_CONTROL
#define EMBER_CALLBACK_SET_DEFAULT_POLL_CONTROL
#define EMBER_CALLBACK_START_MOVE
#define EMBER_CALLBACK_STOP_MOVE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_INIT
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_READ
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_WRITE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_DOWNLOAD_FINISH
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_INVALIDATE_IMAGE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_RETRIEVE_LAST_STORED_OFFSET
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_PREPARE_TO_RESUME_DOWNLOAD
#define EMBER_CALLBACK_ENERGY_SCAN_RESULT
#define EMBER_CALLBACK_SCAN_COMPLETE
#define EMBER_CALLBACK_NETWORK_FOUND
#define EMBER_CALLBACK_CONFIGURE_REPORTING_COMMAND
#define EMBER_CALLBACK_READ_REPORTING_CONFIGURATION_COMMAND
#define EMBER_CALLBACK_CLEAR_REPORT_TABLE
#define EMBER_CALLBACK_REPORTING_ATTRIBUTE_CHANGE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_PRE_MSG
#define EMBER_CALLBACK_OTA_BOOTLOAD
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_INIT
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_TICK
#define EMBER_CALLBACK_OTA_CLIENT_INCOMING_MESSAGE_RAW
#define EMBER_CALLBACK_OTA_CLIENT_START
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_DEFAULT_RESPONSE
#define EMBER_CALLBACK_OTA_CLIENT_VERSION_INFO
#define EMBER_CALLBACK_OTA_CLIENT_DOWNLOAD_COMPLETE
#define EMBER_CALLBACK_OTA_CLIENT_BOOTLOAD
#define EMBER_CALLBACK_OTA_CLIENT_CUSTOM_VERIFY_CALLBACK
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_IAS_ZONE_CLUSTER_SERVER_PRE_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_ZONE_ENROLL_RESPONSE
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_IAS_ZONE_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_IAS_ZONE_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IAS_ZONE_CLUSTER_IAS_ZONE_CLUSTER_SERVER_MESSAGE_SENT
#define EMBER_CALLBACK_INCOMING_PACKET_HANDOFF
#define EMBER_APPLICATION_HAS_INCOMING_PACKET_HANDOFF
#define EMBER_CALLBACK_OUTGOING_PACKET_HANDOFF
#define EMBER_APPLICATION_HAS_PACKET_HANDOFF
#define EMBER_CALLBACK_GET_CURRENT_SLEEP_CONTROL
#define EMBER_CALLBACK_GET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_SET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_COUNTER_HANDLER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER
#define EMBER_CALLBACK_EZSP_COUNTER_ROLLOVER_HANDLER
#define EZSP_APPLICATION_HAS_COUNTER_ROLLOVER_HANDLER
#define EMBER_CALLBACK_BASIC_CLUSTER_RESET_TO_FACTORY_DEFAULTS
#define EMBER_CALLBACK_OTA_STORAGE_INIT
#define EMBER_CALLBACK_OTA_STORAGE_GET_COUNT
#define EMBER_CALLBACK_OTA_STORAGE_SEARCH
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_FIRST
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_NEXT
#define EMBER_CALLBACK_OTA_STORAGE_CLEAR_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_WRITE_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_GET_FULL_HEADER
#define EMBER_CALLBACK_OTA_STORAGE_GET_TOTAL_IMAGE_SIZE
#define EMBER_CALLBACK_OTA_STORAGE_READ_IMAGE_DATA
#define EMBER_CALLBACK_OTA_STORAGE_CHECK_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_FINISH_DOWNLOAD
/**** Debug printing section ****/

// Global switch
// #define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_DEBUG 0x0002
#define EMBER_AF_PRINT_BITS { 0x03 }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Debug",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 2


#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY


// Generated plugin macros

// Use this macro to check if ADC plugin is included
#define EMBER_AF_PLUGIN_ADC

// Use this macro to check if Address Table plugin is included
#define EMBER_AF_PLUGIN_ADDRESS_TABLE
// User options for plugin Address Table
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_SIZE 2
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_TRUST_CENTER_CACHE_SIZE 2

// Use this macro to check if Antenna Stub plugin is included
#define EMBER_AF_PLUGIN_ANTENNA_STUB

// Use this macro to check if Basic Server Cluster plugin is included
#define EMBER_AF_PLUGIN_BASIC

// Use this macro to check if Binding Table Library plugin is included
#define EMBER_AF_PLUGIN_BINDING_TABLE_LIBRARY
// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 5

// Use this macro to check if CCM* Encryption plugin is included
#define EMBER_AF_PLUGIN_CCM_ENCRYPTION
// User options for plugin CCM* Encryption
#define EMBER_AF_PLUGIN_CCM_ENCRYPTION_SOFTWARE_CCM
#define USE_SOFTWARE_CCM

// Use this macro to check if Radio Coexistence Stub plugin is included
#define EMBER_AF_PLUGIN_COEXISTENCE_STUB

// Use this macro to check if Counters plugin is included
#define EMBER_AF_PLUGIN_COUNTERS
// User options for plugin Counters

// Use this macro to check if Diagnostic Server plugin is included
#define EMBER_AF_PLUGIN_DIAGNOSTIC_SERVER

// Use this macro to check if EEPROM plugin is included
#define EMBER_AF_PLUGIN_EEPROM
// User options for plugin EEPROM
#define EMBER_AF_PLUGIN_EEPROM_PARTIAL_WORD_STORAGE_COUNT 2

// Use this macro to check if Ember Minimal Printf plugin is included
#define EMBER_AF_PLUGIN_EMBER_MINIMAL_PRINTF

// Use this macro to check if End Device Support plugin is included
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT
// User options for plugin End Device Support
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_SHORT_POLL_INTERVAL_SECONDS 1
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_LONG_POLL_INTERVAL_SECONDS 86400
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_WAKE_TIMEOUT_SECONDS 6
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_WAKE_TIMEOUT_BITMASK 24
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_MAX_MISSED_POLLS 3
#define EMBER_AF_REJOIN_ATTEMPTS_MAX 2
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_ENABLE_POLL_COMPLETED_CALLBACK
#define EMBER_AF_PLUGIN_END_DEVICE_SUPPORT_ALLOW_REJOINS_WITH_WELL_KNOWN_LINK_KEY

// Use this macro to check if Form and Join Library plugin is included
#define EMBER_AF_PLUGIN_FORM_AND_JOIN

// Use this macro to check if Generic GPIO Interrupt Controller plugin is included
#define EMBER_AF_PLUGIN_GENERIC_INTERRUPT_CONTROL

// Use this macro to check if HAL Library plugin is included
#define EMBER_AF_PLUGIN_HAL_LIBRARY

// Use this macro to check if Heartbeat plugin is included
#define EMBER_AF_PLUGIN_HEARTBEAT
// User options for plugin Heartbeat
#define EMBER_AF_PLUGIN_HEARTBEAT_PERIOD_QS 1

// Use this macro to check if IAS Zone Server plugin is included
#define EMBER_AF_PLUGIN_IAS_ZONE_SERVER
// User options for plugin IAS Zone Server
#define EMBER_AF_PLUGIN_IAS_ZONE_SERVER_ZONE_TYPE 13

// Use this macro to check if Identify Cluster plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if Idle/Sleep plugin is included
#define EMBER_AF_PLUGIN_IDLE_SLEEP
// User options for plugin Idle/Sleep
#define EMBER_AF_PLUGIN_IDLE_SLEEP_MINIMUM_SLEEP_DURATION_MS 5
#define EMBER_AF_PLUGIN_IDLE_SLEEP_BACKOFF_SLEEP_MS 0

// Use this macro to check if Install Code Library plugin is included
#define EMBER_AF_PLUGIN_INSTALL_CODE_LIBRARY

// Use this macro to check if mbed TLS plugin is included
#define EMBER_AF_PLUGIN_MBEDTLS
// User options for plugin mbed TLS
#define EMBER_AF_PLUGIN_MBEDTLS_CONF_DEVICE_ACCELERATION
#define EMBER_AF_PLUGIN_MBEDTLS_CONF_DEVICE_ACCELERATION_APP

// Use this macro to check if Network Steering plugin is included
#define EMBER_AF_PLUGIN_NETWORK_STEERING
// User options for plugin Network Steering
#define EMBER_AF_PLUGIN_NETWORK_STEERING_CHANNEL_MASK 0x02108000
#define EMBER_AF_PLUGIN_NETWORK_STEERING_RADIO_TX_POWER 20
#define EMBER_AF_PLUGIN_NETWORK_STEERING_SCAN_DURATION 3
#define EMBER_AF_PLUGIN_NETWORK_STEERING_COMMISSIONING_TIME_S 180

// Use this macro to check if NVM3 Library plugin is included
#define EMBER_AF_PLUGIN_NVM3
// User options for plugin NVM3 Library

#define EMBER_AF_PLUGIN_NVM3_CACHE_SIZE 200
#define EMBER_AF_PLUGIN_NVM3_MAX_OBJECT_SIZE 254
#define EMBER_AF_PLUGIN_NVM3_USER_REPACK_HEADROOM 0

// Use this macro to check if OTA Cluster Platform Bootloader plugin is included
#define EMBER_AF_PLUGIN_OTA_BOOTLOAD
// User options for plugin OTA Cluster Platform Bootloader
#define EMBER_AF_PLUGIN_OTA_BOOTLOAD_UART_HOST_REBOOT

// Use this macro to check if OTA Bootload Cluster Client plugin is included
#define EMBER_AF_PLUGIN_OTA_CLIENT
// User options for plugin OTA Bootload Cluster Client
#define EMBER_AF_PLUGIN_OTA_CLIENT_AUTO_START
#define EMBER_AF_PLUGIN_OTA_CLIENT_QUERY_DELAY_MINUTES 999999999
#define EMBER_AF_PLUGIN_OTA_CLIENT_QUERY_ERROR_THRESHOLD 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_DOWNLOAD_DELAY_MS 50
#define EMBER_AF_PLUGIN_OTA_CLIENT_DOWNLOAD_ERROR_THRESHOLD 50
#define EMBER_AF_PLUGIN_OTA_CLIENT_UPGRADE_WAIT_THRESHOLD 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_SERVER_DISCOVERY_DELAY_MINUTES 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_RUN_UPGRADE_REQUEST_DELAY_MINUTES 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_PAGE_REQUEST_SIZE 1024
#define EMBER_AF_PLUGIN_OTA_CLIENT_PAGE_REQUEST_TIMEOUT_SECONDS 5
#define EMBER_AF_PLUGIN_OTA_CLIENT_VERIFY_DELAY_MS 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_SIGNER_EUI0 { 0x00, 0x0D, 0x6F, 0x00, 0x00, 0x19, 0x8B, 0x36 }
#define EMBER_AF_PLUGIN_OTA_CLIENT_SIGNER_EUI1 { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_OTA_CLIENT_SIGNER_EUI2 { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_OTA_CLIENT_MIN_BLOCK_PERIOD_UNITS MILLISECONDS
#define EMBER_AF_PLUGIN_OTA_CLIENT_IGNORE_LOOPBACK_SERVER

// Use this macro to check if OTA Bootload Cluster Client Policy plugin is included
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY
#define CUSTOMER_APPLICATION_VERSION EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_FIRMWARE_VERSION
// User options for plugin OTA Bootload Cluster Client Policy
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_IMAGE_TYPE_ID 14001
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_FIRMWARE_VERSION 18
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_HARDWARE_VERSION 1
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_EBL_VERIFICATION
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_DELETE_FAILED_DOWNLOADS

// Use this macro to check if OTA Bootload Cluster Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_COMMON

// Use this macro to check if OTA Bootload Cluster Storage Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_COMMON
// User options for plugin OTA Bootload Cluster Storage Common Code
#define EMBER_AF_PLUGIN_OTA_STORAGE_COMMON_MAX_TAGS_IN_OTA_FILE 6

// Use this macro to check if OTA Simple Storage Module plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE

// Use this macro to check if OTA Simple Storage EEPROM Driver plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM
// User options for plugin OTA Simple Storage EEPROM Driver
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_SOC_BOOTLOADING_SUPPORT
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_GECKO_BOOTLOADER_STORAGE_SUPPORT DO_NOT_USE_SLOTS
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_SLOT_TO_USE 0
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_STORAGE_START 278528
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_STORAGE_END 520192
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_READ_MODIFY_WRITE_SUPPORT FALSE
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_DOWNLOAD_OFFSET_SAVE_RATE 1024

// Use this macro to check if Packet Handoff plugin is included
#define EMBER_AF_PLUGIN_PACKET_HANDOFF
// User options for plugin Packet Handoff
#define EMBER_AF_PLUGIN_PACKET_HANDOFF_ALLOW_ALL_PACKETS
#define PACKET_HANDOFF_BUFFER_SIZE 256

// Use this macro to check if Packet Validate Library plugin is included
#define EMBER_AF_PLUGIN_PACKET_VALIDATE_LIBRARY

// Use this macro to check if RAIL Library plugin is included
#define EMBER_AF_PLUGIN_RAIL_LIBRARY
// User options for plugin RAIL Library
#define EMBER_AF_PLUGIN_RAIL_LIBRARY_RAILPHYDEF 1

// Use this macro to check if Reporting plugin is included
#define EMBER_AF_PLUGIN_REPORTING
// User options for plugin Reporting
#define EMBER_AF_PLUGIN_REPORTING_TABLE_SIZE 5
#define EMBER_AF_PLUGIN_REPORTING_ENABLE_GROUP_BOUND_REPORTS

// Use this macro to check if Scan Dispatch plugin is included
#define EMBER_AF_PLUGIN_SCAN_DISPATCH
// User options for plugin Scan Dispatch
#define EMBER_AF_PLUGIN_SCAN_DISPATCH_SCAN_QUEUE_SIZE 10

// Use this macro to check if Serial plugin is included
#define EMBER_AF_PLUGIN_SERIAL

// Use this macro to check if Simulated EEPROM version 2 to NVM3 Upgrade Stub plugin is included
#define EMBER_AF_PLUGIN_SIM_EEPROM2_TO_NVM3_UPGRADE_STUB

// Use this macro to check if Simple Main plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_MAIN

// Use this macro to check if Strong Random plugin is included
#define EMBER_AF_PLUGIN_STRONG_RANDOM
// User options for plugin Strong Random
#define EMBER_AF_PLUGIN_STRONG_RANDOM_RADIO_PRNG
#define USE_RADIO_API_FOR_TRNG

// Use this macro to check if Update TC Link Key plugin is included
#define EMBER_AF_PLUGIN_UPDATE_TC_LINK_KEY
// User options for plugin Update TC Link Key
#define EMBER_AF_PLUGIN_UPDATE_TC_LINK_KEY_MAX_ATTEMPTS 10

// Use this macro to check if ZCL Framework Core plugin is included
#define EMBER_AF_PLUGIN_ZCL_FRAMEWORK_CORE
// User options for plugin ZCL Framework Core
#define EMBER_AF_PLUGIN_ZCL_FRAMEWORK_CORE_CLI_ENABLED
#define ZA_CLI_FULL

// Use this macro to check if ZigBee PRO Leaf Library plugin is included
#define EMBER_AF_PLUGIN_ZIGBEE_PRO_LEAF_LIBRARY
// User options for plugin ZigBee PRO Leaf Library
#define EMBER_PACKET_BUFFER_COUNT 100
#define EMBER_END_DEVICE_POLL_TIMEOUT MINUTES_64
#define EMBER_END_DEVICE_POLL_TIMEOUT_SHIFT 6
#define EMBER_LINK_POWER_DELTA_INTERVAL 300
#define EMBER_APS_UNICAST_MESSAGE_COUNT 64
#define EMBER_NEIGHBOR_TABLE_SIZE 1
#define EMBER_MAX_END_DEVICE_CHILDREN 0
#define EMBER_ROUTE_TABLE_SIZE 0
#define EMBER_MIN_ROUTE_TABLE_SIZE 0
#define EMBER_TRANSIENT_KEY_TIMEOUT_S 300
#define EMBER_BROADCAST_TABLE_SIZE 128


// Generated API headers

// API adc-cortexm3 from ADC plugin
#define EMBER_AF_API_ADC_CORTEXM3 "../developer/sdks/v3.1/platform/base/hal/plugin/adc/adc-cortexm3.h"

// API adc from ADC plugin
#define EMBER_AF_API_ADC "../developer/sdks/v3.1/platform/base/hal/plugin/adc/adc.h"

// API antenna from Antenna Stub plugin
#define EMBER_AF_API_ANTENNA "../developer/sdks/v3.1/platform/base/hal/plugin/antenna/antenna.h"

// API coexistence from Radio Coexistence Stub plugin
#define EMBER_AF_API_COEXISTENCE "../developer/sdks/v3.1/platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154/coexistence-802154.h"

// API eeprom from EEPROM plugin
#define EMBER_AF_API_EEPROM "../developer/sdks/v3.1/util/plugin/plugin-common/eeprom/eeprom.h"

// API generic-interrupt-control from Generic GPIO Interrupt Controller plugin
#define EMBER_AF_API_GENERIC_INTERRUPT_CONTROL "../developer/sdks/v3.1/util/plugin/plugin-common/generic-interrupt-control/generic-interrupt-control.h"

// API network-steering from Network Steering plugin
#define EMBER_AF_API_NETWORK_STEERING "../developer/sdks/v3.1/protocol/zigbee/app/framework/plugin/network-steering/network-steering.h"

// API nvm3 from NVM3 Library plugin
#define EMBER_AF_API_NVM3 "../developer/sdks/v3.1/platform/base/hal/plugin/nvm3/nvm3-token.h"

// API rail-library from RAIL Library plugin
#define EMBER_AF_API_RAIL_LIBRARY "../developer/sdks/v3.1/platform/radio/rail_lib/common/rail.h"

// API scan-dispatch from Scan Dispatch plugin
#define EMBER_AF_API_SCAN_DISPATCH "../developer/sdks/v3.1/protocol/zigbee/app/framework/plugin/scan-dispatch/scan-dispatch.h"

// API serial from Serial plugin
#define EMBER_AF_API_SERIAL "../developer/sdks/v3.1/platform/base/hal/plugin/serial/serial.h"

// API update-tc-link-key from Update TC Link Key plugin
#define EMBER_AF_API_UPDATE_TC_LINK_KEY "../developer/sdks/v3.1/protocol/zigbee/app/framework/plugin/update-tc-link-key/update-tc-link-key.h"

// API command-interpreter2 from ZCL Framework Core plugin
#define EMBER_AF_API_COMMAND_INTERPRETER2 "../developer/sdks/v3.1/protocol/zigbee/app/util/serial/command-interpreter2.h"


// Custom macros
#ifdef SIMEE2_TO_NVM3_UPGRADE
#undef SIMEE2_TO_NVM3_UPGRADE
#endif
#define SIMEE2_TO_NVM3_UPGRADE



#endif // SILABS_ZNET_CONFIG
