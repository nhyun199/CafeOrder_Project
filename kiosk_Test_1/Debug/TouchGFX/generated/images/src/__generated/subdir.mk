################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.cpp 

OBJS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__generated/%.o TouchGFX/generated/images/src/__generated/%.su TouchGFX/generated/images/src/__generated/%.cyclo: ../TouchGFX/generated/images/src/__generated/%.cpp TouchGFX/generated/images/src/__generated/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../FATFS/Target -I../FATFS/App -I../USB_HOST/App -I../USB_HOST/Target -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I../Drivers/BSP/STM32746G-Discovery -I../Drivers/BSP/Components/Common -I../Drivers/BSP/Components/ft5336 -I../Drivers/BSP/Components/n25q128a -I../Drivers/BSP/Components/rk043fn48h -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated:
	-$(RM) ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_normal.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_regular_height_50_medium_round_pressed.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

