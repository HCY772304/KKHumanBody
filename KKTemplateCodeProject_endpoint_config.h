// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_AF_ENDPOINT_CONFIG
#define SILABS_AF_ENDPOINT_CONFIG


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT (1)


// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
5,'K','o','n','k','e',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 0,Default value: Basic,manufacturer name */, \
16,'3','A','F','E','1','4','0','1','0','4','0','2','0','2','0','D',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 33,Default value: Basic,model identifier */, \
8,'2','0','2','2','0','9','0','6',0,0,0,0,0,0,0,0 /* 66,Default value: Basic,date code */, \
13,'1','4','-','2','0','2','2','0','9','0','6','0','1',0,0,0 /* 83,Default value: Basic,sw build id */, \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 100,Default value: Over the Air Bootloading,OTA Upgrade Server ID */, \
0xFF, 0xFF, 0xFF, 0xFF /* 108,Default value: Over the Air Bootloading,Offset (address) into the file */, \
  }
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
5,'K','o','n','k','e',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 0,Default value: Basic,manufacturer name */, \
16,'3','A','F','E','1','4','0','1','0','4','0','2','0','2','0','D',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 33,Default value: Basic,model identifier */, \
8,'2','0','2','2','0','9','0','6',0,0,0,0,0,0,0,0 /* 66,Default value: Basic,date code */, \
13,'1','4','-','2','0','2','2','0','9','0','6','0','1',0,0,0 /* 83,Default value: Basic,sw build id */, \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 100,Default value: Over the Air Bootloading,OTA Upgrade Server ID */, \
0xFF, 0xFF, 0xFF, 0xFF /* 108,Default value: Over the Air Bootloading,Offset (address) into the file */, \
  }
#endif // BIGENDIAN_CPU




// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)3 } }, /* 0 / Basic / cluster revision*/\
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x08 } }, /* 1 / Basic / ZCL version*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x14 } }, /* 2 / Basic / application version*/\
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 3 / Basic / stack version*/\
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x01 } }, /* 4 / Basic / hardware version*/\
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(generatedDefaults[0]) } }, /* 5 / Basic / manufacturer name*/\
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(generatedDefaults[33]) } }, /* 6 / Basic / model identifier*/\
    { 0x0006, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(generatedDefaults[66]) } }, /* 7 / Basic / date code*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x01 } }, /* 8 / Basic / power source*/\
    { 0x0008, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0xFF } }, /* 9 / Basic / generic device class*/\
    { 0x0009, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0xFF } }, /* 10 / Basic / generic device type*/\
    { 0x000A, ZCL_OCTET_STRING_ATTRIBUTE_TYPE, 17, (0x00), { NULL } }, /* 11 / Basic / product code*/\
    { 0x000B, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 65, (0x00), { NULL } }, /* 12 / Basic / product url*/\
    { 0x4000, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(generatedDefaults[83]) } }, /* 13 / Basic / sw build id*/\
    { 0xE000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0000 } }, /* 14 / Basic / reset reason*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)3 } }, /* 15 / Basic / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 16 / Identify / identify time*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)2 } }, /* 17 / Identify / cluster revision*/\
    { 0x0000, ZCL_IEEE_ADDRESS_ATTRIBUTE_TYPE, 8, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[100]) } }, /* 18 / Over the Air Bootloading / OTA Upgrade Server ID*/\
    { 0x0001, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[108]) } }, /* 19 / Over the Air Bootloading / Offset (address) into the file*/\
    { 0x0006, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x00 } }, /* 20 / Over the Air Bootloading / OTA Upgrade Status*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)4 } }, /* 21 / Over the Air Bootloading / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0000 } }, /* 22 / Illuminance Measurement / measured value*/\
    { 0x0001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 23 / Illuminance Measurement / min measured value*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 24 / Illuminance Measurement / max measured value*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)2 } }, /* 25 / Illuminance Measurement / cluster revision*/\
    { 0x0000, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x00 } }, /* 26 / IAS Zone / zone state*/\
    { 0x0001, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x000D } }, /* 27 / IAS Zone / zone type*/\
    { 0x0002, ZCL_BITMAP16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0000 } }, /* 28 / IAS Zone / zone status*/\
    { 0x0010, ZCL_IEEE_ADDRESS_ATTRIBUTE_TYPE, 8, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE), { NULL } }, /* 29 / IAS Zone / IAS CIE address*/\
    { 0x0011, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0xFF } }, /* 30 / IAS Zone / Zone ID*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)2 } }, /* 31 / IAS Zone / cluster revision*/\
    { 0x011C, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 32 / Diagnostics / last message lqi*/\
    { 0x011D, ZCL_INT8S_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 33 / Diagnostics / last message rssi*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)3 } }, /* 34 / Diagnostics / cluster revision*/\
    { 0x0000, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 255, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 35 / OptTunnel / OptData*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000UL } }, /* 36 / OptTunnel / MTO_RR_RspRandom*/\
    { 0x0003, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 37 / OptTunnel / AssociatedAnnounce*/\
    { 0x0010, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 38 / OptTunnel / CMEI*/\
    { 0x0011, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 39 / OptTunnel / ISN*/\
    { 0x0012, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (0x00), { NULL } }, /* 40 / OptTunnel / InstallCode*/\
    { 0x0013, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 41 / OptTunnel / CHUNK_N1*/\
    { 0x8000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x01 } }, /* 42 / Basic / SlightMoveSwitch*/\
    { 0x8001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x01 } }, /* 43 / Basic / ExistenceSwitch*/\
    { 0xE005, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x01 } }, /* 44 / Basic / IndicateMode*/\
    { 0xE006, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x32 } }, /* 45 / Basic / Sensitivity*/\
    { 0xE007, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x001E } }, /* 46 / Basic / DelayConfiguration*/\
    { 0xE008, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0xFF } }, /* 47 / Basic / MCUSoftVersion*/\
    { 0xE009, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE|ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0xFF } }, /* 48 / Basic / MCUHardVersion*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
const EmberAfGenericClusterFunction emberAfFuncArrayBasicClusterServer[] = { (EmberAfGenericClusterFunction)emberAfBasicClusterServerAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayOtaBootloadClusterClient[] = { (EmberAfGenericClusterFunction)emberAfOtaBootloadClusterClientInitCallback,(EmberAfGenericClusterFunction)emberAfOtaBootloadClusterClientDefaultResponseCallback}; \
const EmberAfGenericClusterFunction emberAfFuncArrayIasZoneClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIasZoneClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfIasZoneClusterServerMessageSentCallback,(EmberAfGenericClusterFunction)emberAfIasZoneClusterServerPreAttributeChangedCallback}; \


// Clusters definitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 1, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[1]), 15, 84, (CLUSTER_MASK_SERVER| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayBasicClusterServer, },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 2, 4, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, },    \
    { 0x0019, (EmberAfAttributeMetadata*)&(generatedAttributes[18]), 4, 15, (CLUSTER_MASK_CLIENT| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION), emberAfFuncArrayOtaBootloadClusterClient, },    \
    { 0x0400, (EmberAfAttributeMetadata*)&(generatedAttributes[22]), 4, 6, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0500, (EmberAfAttributeMetadata*)&(generatedAttributes[26]), 6, 14, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_MESSAGE_SENT_FUNCTION| CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIasZoneClusterServer, },    \
    { 0x0B05, (EmberAfAttributeMetadata*)&(generatedAttributes[32]), 3, 4, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0xFCC0, (EmberAfAttributeMetadata*)&(generatedAttributes[35]), 0, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0xFCC0, (EmberAfAttributeMetadata*)&(generatedAttributes[35]), 7, 406, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[42]), 0, 0, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[42]), 7, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 11, 533 }, \
  }


// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)


// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (255)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (123)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 533

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260 }

// Array of device ids
#define FIXED_DEVICE_IDS { 1026 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 1 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginEepromInitCallback(void); \
  void emberAfPluginReportingInitCallback(void); \
  void emberAfPluginIdleSleepInitCallback(void); \
  void emberAfPluginCountersInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginEepromInitCallback(); \
  emberAfPluginReportingInitCallback(); \
  emberAfPluginIdleSleepInitCallback(); \
  emberAfPluginCountersInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginReportingStackStatusCallback(EmberStatus status); \
  void emberAfPluginOtaClientStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkSteeringStackStatusCallback(EmberStatus status); \
  void emberAfPluginIasZoneServerStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginReportingStackStatusCallback(status); \
  emberAfPluginOtaClientStackStatusCallback(status); \
  emberAfPluginNetworkSteeringStackStatusCallback(status); \
  emberAfPluginIasZoneServerStackStatusCallback(status); \


// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    { 0x0000, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Basic / ResetToFactoryDefaults */ \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */ \
    { 0x0003, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */ \
    { 0x0003, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */ \
    { 0x0019, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Over the Air Bootloading / QueryNextImageRequest */ \
    { 0x0019, 0x03, COMMAND_MASK_OUTGOING_CLIENT }, /* Over the Air Bootloading / ImageBlockRequest */ \
    { 0x0019, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* Over the Air Bootloading / UpgradeEndRequest */ \
    { 0x0500, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* IAS Zone / ZoneStatusChangeNotification */ \
    { 0x0500, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* IAS Zone / ZoneEnrollResponse */ \
    { 0x0500, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* IAS Zone / ZoneEnrollRequest */ \
  }
#define EMBER_AF_GENERATED_COMMAND_COUNT (10)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)


// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS {\
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0xE000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0400, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0500, 0x0002, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0x8000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0x8001, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0xE005, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0xE006, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0xE007, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0xE008, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0000, 0xE009, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (10)
#endif // SILABS_AF_ENDPOINT_CONFIG