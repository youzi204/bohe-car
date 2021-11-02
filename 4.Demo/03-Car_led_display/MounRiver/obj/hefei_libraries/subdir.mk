################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/common.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/delay.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_adc.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_dma.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_encoder.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_exti.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_flash.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_gpio.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_i2c_hardware.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_i2c_software.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_nvic.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_pit.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_pwm.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_spi.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_systick.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_tim.c \
D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_uart.c 

OBJS += \
./hefei_libraries/common.o \
./hefei_libraries/delay.o \
./hefei_libraries/hf_adc.o \
./hefei_libraries/hf_dma.o \
./hefei_libraries/hf_encoder.o \
./hefei_libraries/hf_exti.o \
./hefei_libraries/hf_flash.o \
./hefei_libraries/hf_gpio.o \
./hefei_libraries/hf_i2c_hardware.o \
./hefei_libraries/hf_i2c_software.o \
./hefei_libraries/hf_nvic.o \
./hefei_libraries/hf_pit.o \
./hefei_libraries/hf_pwm.o \
./hefei_libraries/hf_spi.o \
./hefei_libraries/hf_systick.o \
./hefei_libraries/hf_tim.o \
./hefei_libraries/hf_uart.o 

C_DEPS += \
./hefei_libraries/common.d \
./hefei_libraries/delay.d \
./hefei_libraries/hf_adc.d \
./hefei_libraries/hf_dma.d \
./hefei_libraries/hf_encoder.d \
./hefei_libraries/hf_exti.d \
./hefei_libraries/hf_flash.d \
./hefei_libraries/hf_gpio.d \
./hefei_libraries/hf_i2c_hardware.d \
./hefei_libraries/hf_i2c_software.d \
./hefei_libraries/hf_nvic.d \
./hefei_libraries/hf_pit.d \
./hefei_libraries/hf_pwm.d \
./hefei_libraries/hf_spi.d \
./hefei_libraries/hf_systick.d \
./hefei_libraries/hf_tim.d \
./hefei_libraries/hf_uart.d 


# Each subdirectory must supply rules for building sources it contributes
hefei_libraries/common.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/common.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/delay.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/delay.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_adc.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_dma.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_dma.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_encoder.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_encoder.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_exti.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_exti.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_flash.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_flash.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_gpio.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_gpio.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_i2c_hardware.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_i2c_hardware.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_i2c_software.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_i2c_software.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_nvic.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_nvic.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_pit.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_pit.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_pwm.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_pwm.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_spi.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_spi.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_systick.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_systick.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_tim.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_tim.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_uart.o: D:/Desktop/智能车基地/CH32V103_SmartCar_V1.0/4.Demo/Libraries/hefei_libraries/hf_uart.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\Core" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\CODE" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\inc" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\03-Car_led_display\USER\src" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries\board" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_libraries" -I"D:\Desktop\智能车基地\CH32V103_SmartCar_V1.0\4.Demo\Libraries\hefei_peripheral" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

