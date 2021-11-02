################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/Device/CH32V10x_p/Startup/startup_ch32v10x.S 

OBJS += \
./CH32V10x/CH32V10x_p/Startup/startup_ch32v10x.o 

S_UPPER_DEPS += \
./CH32V10x/CH32V10x_p/Startup/startup_ch32v10x.d 


# Each subdirectory must supply rules for building sources it contributes
CH32V10x/CH32V10x_p/Startup/startup_ch32v10x.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/Device/CH32V10x_p/Startup/startup_ch32v10x.S
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -x assembler -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\Startup" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

