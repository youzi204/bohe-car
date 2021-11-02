################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/Device/Core/core_riscv.c 

OBJS += \
./CH32V10x/Core/core_riscv.o 

C_DEPS += \
./CH32V10x/Core/core_riscv.d 


# Each subdirectory must supply rules for building sources it contributes
CH32V10x/Core/core_riscv.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/Device/Core/core_riscv.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\02-Car_Light\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\02-Car_Light\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\02-Car_Light\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

