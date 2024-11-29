################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/BitmapDatabase.cpp \
../TouchGFX/generated/images/src/SVGDatabase.cpp \
../TouchGFX/generated/images/src/image_americano_100100.cpp \
../TouchGFX/generated/images/src/image_back_2020.cpp \
../TouchGFX/generated/images/src/image_basket_40-48-60.cpp \
../TouchGFX/generated/images/src/image_basket_40-48.cpp \
../TouchGFX/generated/images/src/image_bi_logo1_100-50.cpp \
../TouchGFX/generated/images/src/image_bi_logo3_200-100.cpp \
../TouchGFX/generated/images/src/image_cube_latte_100100.cpp \
../TouchGFX/generated/images/src/image_indicator1010.cpp \
../TouchGFX/generated/images/src/image_indicator_highlight1010.cpp \
../TouchGFX/generated/images/src/image_kakaoEvent250250.cpp \
../TouchGFX/generated/images/src/image_main_40-48-60.cpp \
../TouchGFX/generated/images/src/image_main_40-48.cpp \
../TouchGFX/generated/images/src/image_order_40-48-60.cpp \
../TouchGFX/generated/images/src/image_order_40-48.cpp \
../TouchGFX/generated/images/src/image_pay5050.cpp \
../TouchGFX/generated/images/src/image_profile_40-48-60.cpp \
../TouchGFX/generated/images/src/image_profile_40-48.cpp \
../TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.cpp \
../TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.cpp \
../TouchGFX/generated/images/src/image_strawberry_latte_100100.cpp 

OBJS += \
./TouchGFX/generated/images/src/BitmapDatabase.o \
./TouchGFX/generated/images/src/SVGDatabase.o \
./TouchGFX/generated/images/src/image_americano_100100.o \
./TouchGFX/generated/images/src/image_back_2020.o \
./TouchGFX/generated/images/src/image_basket_40-48-60.o \
./TouchGFX/generated/images/src/image_basket_40-48.o \
./TouchGFX/generated/images/src/image_bi_logo1_100-50.o \
./TouchGFX/generated/images/src/image_bi_logo3_200-100.o \
./TouchGFX/generated/images/src/image_cube_latte_100100.o \
./TouchGFX/generated/images/src/image_indicator1010.o \
./TouchGFX/generated/images/src/image_indicator_highlight1010.o \
./TouchGFX/generated/images/src/image_kakaoEvent250250.o \
./TouchGFX/generated/images/src/image_main_40-48-60.o \
./TouchGFX/generated/images/src/image_main_40-48.o \
./TouchGFX/generated/images/src/image_order_40-48-60.o \
./TouchGFX/generated/images/src/image_order_40-48.o \
./TouchGFX/generated/images/src/image_pay5050.o \
./TouchGFX/generated/images/src/image_profile_40-48-60.o \
./TouchGFX/generated/images/src/image_profile_40-48.o \
./TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.o \
./TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.o \
./TouchGFX/generated/images/src/image_strawberry_latte_100100.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/BitmapDatabase.d \
./TouchGFX/generated/images/src/SVGDatabase.d \
./TouchGFX/generated/images/src/image_americano_100100.d \
./TouchGFX/generated/images/src/image_back_2020.d \
./TouchGFX/generated/images/src/image_basket_40-48-60.d \
./TouchGFX/generated/images/src/image_basket_40-48.d \
./TouchGFX/generated/images/src/image_bi_logo1_100-50.d \
./TouchGFX/generated/images/src/image_bi_logo3_200-100.d \
./TouchGFX/generated/images/src/image_cube_latte_100100.d \
./TouchGFX/generated/images/src/image_indicator1010.d \
./TouchGFX/generated/images/src/image_indicator_highlight1010.d \
./TouchGFX/generated/images/src/image_kakaoEvent250250.d \
./TouchGFX/generated/images/src/image_main_40-48-60.d \
./TouchGFX/generated/images/src/image_main_40-48.d \
./TouchGFX/generated/images/src/image_order_40-48-60.d \
./TouchGFX/generated/images/src/image_order_40-48.d \
./TouchGFX/generated/images/src/image_pay5050.d \
./TouchGFX/generated/images/src/image_profile_40-48-60.d \
./TouchGFX/generated/images/src/image_profile_40-48.d \
./TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.d \
./TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.d \
./TouchGFX/generated/images/src/image_strawberry_latte_100100.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/%.o TouchGFX/generated/images/src/%.su TouchGFX/generated/images/src/%.cyclo: ../TouchGFX/generated/images/src/%.cpp TouchGFX/generated/images/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../FATFS/Target -I../FATFS/App -I../USB_HOST/App -I../USB_HOST/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/Common" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/ft5336" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/n25q128a" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/Components/rk043fn48h" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_2/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I../LWIP/App -I../LWIP/Target -I../Middlewares/Third_Party/LwIP/src/include -I../Middlewares/Third_Party/LwIP/system -I../Drivers/BSP/Components/lan8742 -I../Middlewares/Third_Party/LwIP/src/include/netif/ppp -I../Middlewares/Third_Party/LwIP/src/include/lwip -I../Middlewares/Third_Party/LwIP/src/include/lwip/apps -I../Middlewares/Third_Party/LwIP/src/include/lwip/priv -I../Middlewares/Third_Party/LwIP/src/include/lwip/prot -I../Middlewares/Third_Party/LwIP/src/include/netif -I../Middlewares/Third_Party/LwIP/src/include/compat/posix -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/arpa -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/net -I../Middlewares/Third_Party/LwIP/src/include/compat/posix/sys -I../Middlewares/Third_Party/LwIP/src/include/compat/stdc -I../Middlewares/Third_Party/LwIP/system/arch -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src

clean-TouchGFX-2f-generated-2f-images-2f-src:
	-$(RM) ./TouchGFX/generated/images/src/BitmapDatabase.cyclo ./TouchGFX/generated/images/src/BitmapDatabase.d ./TouchGFX/generated/images/src/BitmapDatabase.o ./TouchGFX/generated/images/src/BitmapDatabase.su ./TouchGFX/generated/images/src/SVGDatabase.cyclo ./TouchGFX/generated/images/src/SVGDatabase.d ./TouchGFX/generated/images/src/SVGDatabase.o ./TouchGFX/generated/images/src/SVGDatabase.su ./TouchGFX/generated/images/src/image_americano_100100.cyclo ./TouchGFX/generated/images/src/image_americano_100100.d ./TouchGFX/generated/images/src/image_americano_100100.o ./TouchGFX/generated/images/src/image_americano_100100.su ./TouchGFX/generated/images/src/image_back_2020.cyclo ./TouchGFX/generated/images/src/image_back_2020.d ./TouchGFX/generated/images/src/image_back_2020.o ./TouchGFX/generated/images/src/image_back_2020.su ./TouchGFX/generated/images/src/image_basket_40-48-60.cyclo ./TouchGFX/generated/images/src/image_basket_40-48-60.d ./TouchGFX/generated/images/src/image_basket_40-48-60.o ./TouchGFX/generated/images/src/image_basket_40-48-60.su ./TouchGFX/generated/images/src/image_basket_40-48.cyclo ./TouchGFX/generated/images/src/image_basket_40-48.d ./TouchGFX/generated/images/src/image_basket_40-48.o ./TouchGFX/generated/images/src/image_basket_40-48.su ./TouchGFX/generated/images/src/image_bi_logo1_100-50.cyclo ./TouchGFX/generated/images/src/image_bi_logo1_100-50.d ./TouchGFX/generated/images/src/image_bi_logo1_100-50.o ./TouchGFX/generated/images/src/image_bi_logo1_100-50.su ./TouchGFX/generated/images/src/image_bi_logo3_200-100.cyclo ./TouchGFX/generated/images/src/image_bi_logo3_200-100.d ./TouchGFX/generated/images/src/image_bi_logo3_200-100.o ./TouchGFX/generated/images/src/image_bi_logo3_200-100.su ./TouchGFX/generated/images/src/image_cube_latte_100100.cyclo ./TouchGFX/generated/images/src/image_cube_latte_100100.d ./TouchGFX/generated/images/src/image_cube_latte_100100.o ./TouchGFX/generated/images/src/image_cube_latte_100100.su ./TouchGFX/generated/images/src/image_indicator1010.cyclo ./TouchGFX/generated/images/src/image_indicator1010.d ./TouchGFX/generated/images/src/image_indicator1010.o ./TouchGFX/generated/images/src/image_indicator1010.su ./TouchGFX/generated/images/src/image_indicator_highlight1010.cyclo ./TouchGFX/generated/images/src/image_indicator_highlight1010.d ./TouchGFX/generated/images/src/image_indicator_highlight1010.o ./TouchGFX/generated/images/src/image_indicator_highlight1010.su ./TouchGFX/generated/images/src/image_kakaoEvent250250.cyclo ./TouchGFX/generated/images/src/image_kakaoEvent250250.d ./TouchGFX/generated/images/src/image_kakaoEvent250250.o ./TouchGFX/generated/images/src/image_kakaoEvent250250.su ./TouchGFX/generated/images/src/image_main_40-48-60.cyclo ./TouchGFX/generated/images/src/image_main_40-48-60.d ./TouchGFX/generated/images/src/image_main_40-48-60.o ./TouchGFX/generated/images/src/image_main_40-48-60.su ./TouchGFX/generated/images/src/image_main_40-48.cyclo ./TouchGFX/generated/images/src/image_main_40-48.d ./TouchGFX/generated/images/src/image_main_40-48.o ./TouchGFX/generated/images/src/image_main_40-48.su ./TouchGFX/generated/images/src/image_order_40-48-60.cyclo ./TouchGFX/generated/images/src/image_order_40-48-60.d ./TouchGFX/generated/images/src/image_order_40-48-60.o ./TouchGFX/generated/images/src/image_order_40-48-60.su ./TouchGFX/generated/images/src/image_order_40-48.cyclo ./TouchGFX/generated/images/src/image_order_40-48.d ./TouchGFX/generated/images/src/image_order_40-48.o ./TouchGFX/generated/images/src/image_order_40-48.su ./TouchGFX/generated/images/src/image_pay5050.cyclo ./TouchGFX/generated/images/src/image_pay5050.d ./TouchGFX/generated/images/src/image_pay5050.o ./TouchGFX/generated/images/src/image_pay5050.su ./TouchGFX/generated/images/src/image_profile_40-48-60.cyclo ./TouchGFX/generated/images/src/image_profile_40-48-60.d ./TouchGFX/generated/images/src/image_profile_40-48-60.o ./TouchGFX/generated/images/src/image_profile_40-48-60.su ./TouchGFX/generated/images/src/image_profile_40-48.cyclo ./TouchGFX/generated/images/src/image_profile_40-48.d ./TouchGFX/generated/images/src/image_profile_40-48.o ./TouchGFX/generated/images/src/image_profile_40-48.su ./TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.cyclo ./TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.d ./TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.o ./TouchGFX/generated/images/src/image_santa_coconut_appletea_latte_100100.su ./TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.cyclo ./TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.d ./TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.o ./TouchGFX/generated/images/src/image_strawberry_cookie_frappe_100100.su ./TouchGFX/generated/images/src/image_strawberry_latte_100100.cyclo ./TouchGFX/generated/images/src/image_strawberry_latte_100100.d ./TouchGFX/generated/images/src/image_strawberry_latte_100100.o ./TouchGFX/generated/images/src/image_strawberry_latte_100100.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src

