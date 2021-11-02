################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/board_led.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_4keys.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_adc.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_buzzer.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_init.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_light.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_motion.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_reed_switch.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_uart.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_value_process.c 

OBJS += \
./CODE/board_led.o \
./CODE/car_4keys.o \
./CODE/car_adc.o \
./CODE/car_buzzer.o \
./CODE/car_init.o \
./CODE/car_light.o \
./CODE/car_motion.o \
./CODE/car_reed_switch.o \
./CODE/car_uart.o \
./CODE/car_value_process.o 

C_DEPS += \
./CODE/board_led.d \
./CODE/car_4keys.d \
./CODE/car_adc.d \
./CODE/car_buzzer.d \
./CODE/car_init.d \
./CODE/car_light.d \
./CODE/car_motion.d \
./CODE/car_reed_switch.d \
./CODE/car_uart.d \
./CODE/car_value_process.d 


# Each subdirectory must supply rules for building sources it contributes
CODE/board_led.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/board_led.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_4keys.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_4keys.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_adc.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_buzzer.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_buzzer.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_init.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_init.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_light.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_light.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_motion.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_motion.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_reed_switch.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_reed_switch.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_uart.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_uart.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_value_process.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/04-Car_uart_query/CODE/car_value_process.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\04-Car_uart_query\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

