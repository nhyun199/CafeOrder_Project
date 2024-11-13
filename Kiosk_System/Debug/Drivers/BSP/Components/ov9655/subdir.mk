################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/ov9655/ov9655.c \
../Drivers/BSP/Components/ov9655/ov9655_reg.c 

C_DEPS += \
./Drivers/BSP/Components/ov9655/ov9655.d \
./Drivers/BSP/Components/ov9655/ov9655_reg.d 

OBJS += \
./Drivers/BSP/Components/ov9655/ov9655.o \
./Drivers/BSP/Components/ov9655/ov9655_reg.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/ov9655/%.o Drivers/BSP/Components/ov9655/%.su Drivers/BSP/Components/ov9655/%.cyclo: ../Drivers/BSP/Components/ov9655/%.c Drivers/BSP/Components/ov9655/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../LIBJPEG/App -I../LIBJPEG/Target -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/LibJPEG/include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I"C:/TouchGFXProjects/Kiosk_System/Drivers/BSP" -I"C:/TouchGFXProjects/Kiosk_System/Drivers/BSP/Components/ft5336" -I"C:/TouchGFXProjects/Kiosk_System/Drivers/BSP/STM32746G-Discovery" -I"C:/TouchGFXProjects/Kiosk_System/Drivers/BSP/Components/rk043fn48" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-ov9655

clean-Drivers-2f-BSP-2f-Components-2f-ov9655:
	-$(RM) ./Drivers/BSP/Components/ov9655/ov9655.cyclo ./Drivers/BSP/Components/ov9655/ov9655.d ./Drivers/BSP/Components/ov9655/ov9655.o ./Drivers/BSP/Components/ov9655/ov9655.su ./Drivers/BSP/Components/ov9655/ov9655_reg.cyclo ./Drivers/BSP/Components/ov9655/ov9655_reg.d ./Drivers/BSP/Components/ov9655/ov9655_reg.o ./Drivers/BSP/Components/ov9655/ov9655_reg.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-ov9655

