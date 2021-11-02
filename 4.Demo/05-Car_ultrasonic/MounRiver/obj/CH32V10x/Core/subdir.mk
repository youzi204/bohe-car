################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/Device/Core/core_riscv.c 

OBJS += \
./CH32V10x/Core/core_riscv.o 

C_DEPS += \
./CH32V10x/Core/core_riscv.d 


# Each subdirectory must supply rules for building sources it contributes
CH32V10x/Core/core_riscv.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/Device/Core/core_riscv.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\05-Car_ultrasonic\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\05-Car_ultrasonic\USER\inc" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\05-Car_ultrasonic\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

