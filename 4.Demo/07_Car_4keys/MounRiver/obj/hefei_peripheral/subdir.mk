################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_HC_SR04.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_L9110S_2.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_TM1637.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_WS2812b.c 

OBJS += \
./hefei_peripheral/HF_HC_SR04.o \
./hefei_peripheral/HF_L9110S_2.o \
./hefei_peripheral/HF_TM1637.o \
./hefei_peripheral/HF_WS2812b.o 

C_DEPS += \
./hefei_peripheral/HF_HC_SR04.d \
./hefei_peripheral/HF_L9110S_2.d \
./hefei_peripheral/HF_TM1637.d \
./hefei_peripheral/HF_WS2812b.d 


# Each subdirectory must supply rules for building sources it contributes
hefei_peripheral/HF_HC_SR04.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_HC_SR04.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_peripheral/HF_L9110S_2.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_L9110S_2.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_peripheral/HF_TM1637.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_TM1637.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_peripheral/HF_WS2812b.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_peripheral/HF_WS2812b.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\07_Car_4keys\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

