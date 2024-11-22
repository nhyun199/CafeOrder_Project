################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f746nghx.s 

S_DEPS += \
./Core/Startup/startup_stm32f746nghx.d 

OBJS += \
./Core/Startup/startup_stm32f746nghx.o 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m7 -g3 -DDEBUG -c -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_1/Drivers/BSP/Components/Common" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_1/Drivers/BSP/Components/ft5336" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_1/Drivers/BSP/Components/n25q128a" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_1/Drivers/BSP/Components/rk043fn48h" -I"C:/Users/KOSTA/Desktop/Project/TOUCHGFX_1/Drivers/BSP/STM32746G-Discovery" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32f746nghx.d ./Core/Startup/startup_stm32f746nghx.o

.PHONY: clean-Core-2f-Startup

