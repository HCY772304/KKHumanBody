################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/simplicity\ studio5/s5/developer/sdks/gecko_sdk_suite/v3.1/protocol/zigbee/app/framework/plugin/update-tc-link-key/update-tc-link-key-cli.c \
../update-tc-link-key/update-tc-link-key.c 

OBJS += \
./update-tc-link-key/update-tc-link-key-cli.o \
./update-tc-link-key/update-tc-link-key.o 

C_DEPS += \
./update-tc-link-key/update-tc-link-key-cli.d \
./update-tc-link-key/update-tc-link-key.d 


# Each subdirectory must supply rules for building sources it contributes
update-tc-link-key/update-tc-link-key-cli.o: D:/simplicity\ studio5/s5/developer/sdks/gecko_sdk_suite/v3.1/protocol/zigbee/app/framework/plugin/update-tc-link-key/update-tc-link-key-cli.c update-tc-link-key/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: IAR C/C++ Compiler for ARM'
	iccarm "$<" -o "$@" --no_path_in_file_macros --separate_cluster_for_initialized_variables -I"D:\simplicity studio5\s5\KKHumanBody\zcl-framework-core_inc" -I"D:\simplicity studio5\s5\KKHumanBody\ota-client_inc" -I"D:\simplicity studio5\s5\KKHumanBody\end-device-support_inc" -I"D:\simplicity studio5\s5\KKHumanBody\reporting_inc" -I"D:\simplicity studio5\s5\KKHumanBody\network-steering_inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1/" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//plugin" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//micro/cortexm3/efm32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//micro/cortexm3/efm32/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//micro/cortexm3/efm32/efr32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../CMSIS/Include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/common/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/dmadrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/gpiointerrupt/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../service/sleeptimer/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../service/sleeptimer/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../common/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/sleep/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/spidrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/tempdrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/uartdrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/ustimer/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emlib/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../middleware/glib" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../middleware/glib/glib" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/rail_lib/plugin" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/rail_lib/chip/efr32/rf/common/cortex" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/rail_lib/chip/efr32/rf/rfprotocol/ieee802154/cortex" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/mac" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/halconfig/inc/hal-config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//hardware/module/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//hardware/kit/common/halconfig" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//hardware/kit/common/bsp" -I"D:\simplicity studio5\s5\KKHumanBody" -I"D:\simplicity studio5\s5\KKHumanBody\hal-config" -I"D:\simplicity studio5\s5\KKHumanBody\external-generated-files" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal/micro/cortexm3/efm32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/bootloader/api" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/app/framework" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/stack" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/app/util" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/app/framework/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/Device/SiliconLabs/EFR32MG21/Include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal/micro/cortexm3/compiler" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/bootloader" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/emdrv/nvm3/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/chip/efr32/efr32xg2x" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/common" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/plugin/coexistence/common" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/plugin/coexistence/hal/efr32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/protocol/ble" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/protocol/ieee802154" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/protocol/zwave" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/hfxo_manager/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/mpu/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/power_manager/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/sleeptimer/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/sleeptimer/src" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/tool/appbuilder/../../app/framework/../../../../platform/common/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/tool/appbuilder/../../app/framework/../../../../platform/radio/mac" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/tool/appbuilder/../../app/framework/../../../../util/silicon_labs/silabs_core" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/plugin/plugin-common" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/plugin/plugin-common/mbedtls" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/include/mbedtls" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/include/psa" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/library" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/se_manager/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/se_manager/src" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_alt/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_cryptoacc_library/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_mbedtls_support/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_mbedtls_support/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_protocol_crypto/src" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_psa_driver/inc" -e --use_c++_inline --cpu Cortex-M33 --fpu VFPv5_sp --debug --dlib_config "D:/IAR7_8/arm/inc/c/DLib_Config_Normal.h" --endian little --cpu_mode thumb -Ohz --no_unroll --no_clustering '-DCONFIGURATION_HEADER="app/framework/util/config.h"' '-DCORTEXM3=1' '-DCORTEXM3_EFM32_MICRO=1' '-DCORTEXM3_EFR32=1' '-DCORTEXM3_EFR32_MICRO=1' '-DLOCAL_STORAGE_BTL=1' '-DATTRIBUTE_STORAGE_CONFIGURATION="KKTemplateCodeProject_endpoint_config.h"' '-DCORTEXM3_EFR32MG21A020F768IM32=1' '-DCORTEXM3_EFR32MG21A020F768IM32_MICRO=1' '-DGENERATED_TOKEN_HEADER="KKTemplateCodeProject_tokens.h"' '-DZA_GENERATED_HEADER="KKTemplateCodeProject.h"' '-DPLATFORM_HEADER="platform/base/hal/micro/cortexm3/compiler/iar.h"' '-DEFR32MG21=1' '-DEFR32MG21A020F768IM32=1' '-DEFR32_SERIES2_CONFIG1_MICRO=1' '-DLOCKBITS_IN_MAINFLASH_SIZE=8192' '-DPSSTORE_SIZE=0' '-DLONGTOKEN_SIZE=0' '-DHAL_CONFIG=1' '-DEMBER_AF_USE_HWCONF=1' '-DEMBER_AF_DEFAULT_APS_OPTIONS=EMBER_APS_OPTION_RETRY  | EMBER_APS_OPTION_ENABLE_ROUTE_DISCOVERY    | EMBER_APS_OPTION_ENABLE_ADDRESS_DISCOVERY  | EMBER_APS_OPTION_SOURCE_EUI64' '-DEMBER_AF_DISCOVERY_TIMEOUT_QS=3 * 4' '-DEMBER_ROUTE_TABLE_SIZE=255' '-DEMLIB_USER_CONFIG=1' '-DMBEDTLS_CONFIG_FILE="mbedtls-config-generated.h"' '-DNVM3_DEFAULT_NVM_SIZE=NVM3_FLASH_PAGES*FLASH_PAGE_SIZE' '-DSL_CATALOG_POWER_MANAGER_PRESENT=1' '-DUSE_NVM3=1' '-DZA_MAX_HOPS=30' '-DEMBER_AF_API_EMBER_TYPES="stack/include/ember-types.h"' '-DEMBER_AF_API_DEBUG_PRINT="app/framework/util/print.h"' '-DEMBER_AF_API_AF_HEADER="app/framework/include/af.h"' '-DEMBER_AF_API_AF_SECURITY_HEADER="app/framework/security/af-security.h"' '-DEMBER_AF_API_NEIGHBOR_HEADER="stack/include/stack-info.h"' '-DEMBER_STACK_ZIGBEE=1' '-DAPPLICATION_TOKEN_HEADER="znet-token.h"' '-DAPPLICATION_MFG_TOKEN_HEADER="znet-mfg-token.h"' '-DMBEDTLS_DEVICE_ACCELERATION_CONFIG_FILE="config-device-acceleration.h"' '-DMBEDTLS_DEVICE_ACCELERATION_CONFIG_APP_FILE="config-device-acceleration-app.h"' '-DNVM3_FLASH_PAGES=8' '-DNVM3_DEFAULT_CACHE_SIZE=200' '-DNVM3_MAX_OBJECT_SIZE=254' '-DNVM3_DEFAULT_REPACK_HEADROOM=0' '-DPHY_RAIL=1' --diag_suppress Pa050 --dependencies=m update-tc-link-key/update-tc-link-key-cli.d
	@echo 'Finished building: $<'
	@echo ' '

update-tc-link-key/update-tc-link-key.o: ../update-tc-link-key/update-tc-link-key.c update-tc-link-key/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: IAR C/C++ Compiler for ARM'
	iccarm "$<" -o "$@" --no_path_in_file_macros --separate_cluster_for_initialized_variables -I"D:\simplicity studio5\s5\KKHumanBody\zcl-framework-core_inc" -I"D:\simplicity studio5\s5\KKHumanBody\ota-client_inc" -I"D:\simplicity studio5\s5\KKHumanBody\end-device-support_inc" -I"D:\simplicity studio5\s5\KKHumanBody\reporting_inc" -I"D:\simplicity studio5\s5\KKHumanBody\network-steering_inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1/" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//plugin" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//micro/cortexm3/efm32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//micro/cortexm3/efm32/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal//micro/cortexm3/efm32/efr32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../CMSIS/Include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/common/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/dmadrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/gpiointerrupt/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../service/sleeptimer/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../service/sleeptimer/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../common/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/sleep/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/spidrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/tempdrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/uartdrv/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emdrv/ustimer/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../emlib/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../middleware/glib" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../middleware/glib/glib" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/rail_lib/plugin" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/rail_lib/chip/efr32/rf/common/cortex" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/rail_lib/chip/efr32/rf/rfprotocol/ieee802154/cortex" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base//../radio/mac" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/halconfig/inc/hal-config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//hardware/module/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//hardware/kit/common/halconfig" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//hardware/kit/common/bsp" -I"D:\simplicity studio5\s5\KKHumanBody" -I"D:\simplicity studio5\s5\KKHumanBody\hal-config" -I"D:\simplicity studio5\s5\KKHumanBody\external-generated-files" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal/micro/cortexm3/efm32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/bootloader/api" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/app/framework" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/stack" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/app/util" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/app/framework/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/Device/SiliconLabs/EFR32MG21/Include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/base/hal/micro/cortexm3/compiler" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/bootloader" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/emdrv/nvm3/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/chip/efr32/efr32xg2x" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/common" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/plugin/coexistence/common" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/plugin/coexistence/hal/efr32" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/protocol/ble" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/protocol/ieee802154" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/protocol/zwave" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/hfxo_manager/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/mpu/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/power_manager/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/sleeptimer/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//platform/service/sleeptimer/src" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/tool/appbuilder/../../app/framework/../../../../platform/common/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/tool/appbuilder/../../app/framework/../../../../platform/radio/mac" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//protocol/zigbee/tool/appbuilder/../../app/framework/../../../../util/silicon_labs/silabs_core" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/plugin/plugin-common" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/plugin/plugin-common/mbedtls" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/include/mbedtls" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/include/psa" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/mbedtls/library" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/se_manager/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/se_manager/src" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_alt/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_cryptoacc_library/include" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_mbedtls_support/config" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_mbedtls_support/inc" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_protocol_crypto/src" -I"D:/simplicity studio5/s5/developer/sdks/gecko_sdk_suite/v3.1//util/third_party/crypto/sl_component/sl_psa_driver/inc" -e --use_c++_inline --cpu Cortex-M33 --fpu VFPv5_sp --debug --dlib_config "D:/IAR7_8/arm/inc/c/DLib_Config_Normal.h" --endian little --cpu_mode thumb -Ohz --no_unroll --no_clustering '-DCONFIGURATION_HEADER="app/framework/util/config.h"' '-DCORTEXM3=1' '-DCORTEXM3_EFM32_MICRO=1' '-DCORTEXM3_EFR32=1' '-DCORTEXM3_EFR32_MICRO=1' '-DLOCAL_STORAGE_BTL=1' '-DATTRIBUTE_STORAGE_CONFIGURATION="KKTemplateCodeProject_endpoint_config.h"' '-DCORTEXM3_EFR32MG21A020F768IM32=1' '-DCORTEXM3_EFR32MG21A020F768IM32_MICRO=1' '-DGENERATED_TOKEN_HEADER="KKTemplateCodeProject_tokens.h"' '-DZA_GENERATED_HEADER="KKTemplateCodeProject.h"' '-DPLATFORM_HEADER="platform/base/hal/micro/cortexm3/compiler/iar.h"' '-DEFR32MG21=1' '-DEFR32MG21A020F768IM32=1' '-DEFR32_SERIES2_CONFIG1_MICRO=1' '-DLOCKBITS_IN_MAINFLASH_SIZE=8192' '-DPSSTORE_SIZE=0' '-DLONGTOKEN_SIZE=0' '-DHAL_CONFIG=1' '-DEMBER_AF_USE_HWCONF=1' '-DEMBER_AF_DEFAULT_APS_OPTIONS=EMBER_APS_OPTION_RETRY  | EMBER_APS_OPTION_ENABLE_ROUTE_DISCOVERY    | EMBER_APS_OPTION_ENABLE_ADDRESS_DISCOVERY  | EMBER_APS_OPTION_SOURCE_EUI64' '-DEMBER_AF_DISCOVERY_TIMEOUT_QS=3 * 4' '-DEMBER_ROUTE_TABLE_SIZE=255' '-DEMLIB_USER_CONFIG=1' '-DMBEDTLS_CONFIG_FILE="mbedtls-config-generated.h"' '-DNVM3_DEFAULT_NVM_SIZE=NVM3_FLASH_PAGES*FLASH_PAGE_SIZE' '-DSL_CATALOG_POWER_MANAGER_PRESENT=1' '-DUSE_NVM3=1' '-DZA_MAX_HOPS=30' '-DEMBER_AF_API_EMBER_TYPES="stack/include/ember-types.h"' '-DEMBER_AF_API_DEBUG_PRINT="app/framework/util/print.h"' '-DEMBER_AF_API_AF_HEADER="app/framework/include/af.h"' '-DEMBER_AF_API_AF_SECURITY_HEADER="app/framework/security/af-security.h"' '-DEMBER_AF_API_NEIGHBOR_HEADER="stack/include/stack-info.h"' '-DEMBER_STACK_ZIGBEE=1' '-DAPPLICATION_TOKEN_HEADER="znet-token.h"' '-DAPPLICATION_MFG_TOKEN_HEADER="znet-mfg-token.h"' '-DMBEDTLS_DEVICE_ACCELERATION_CONFIG_FILE="config-device-acceleration.h"' '-DMBEDTLS_DEVICE_ACCELERATION_CONFIG_APP_FILE="config-device-acceleration-app.h"' '-DNVM3_FLASH_PAGES=8' '-DNVM3_DEFAULT_CACHE_SIZE=200' '-DNVM3_MAX_OBJECT_SIZE=254' '-DNVM3_DEFAULT_REPACK_HEADROOM=0' '-DPHY_RAIL=1' --diag_suppress Pa050 --dependencies=m update-tc-link-key/update-tc-link-key.d
	@echo 'Finished building: $<'
	@echo ' '


