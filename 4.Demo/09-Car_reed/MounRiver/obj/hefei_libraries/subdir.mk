################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/common.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/delay.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_adc.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_dma.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_encoder.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_exti.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_flash.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_gpio.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_i2c_hardware.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_i2c_software.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_nvic.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_pit.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_pwm.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_spi.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_systick.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_tim.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_uart.c 

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
hefei_libraries/common.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/common.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/delay.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/delay.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_adc.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_dma.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_dma.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_encoder.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_encoder.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_exti.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_exti.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_flash.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_flash.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_gpio.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_gpio.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_i2c_hardware.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_i2c_hardware.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_i2c_software.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_i2c_software.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_nvic.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_nvic.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_pit.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_pit.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_pwm.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_pwm.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_spi.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_spi.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_systick.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_systick.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_tim.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_tim.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/hf_uart.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/hf_uart.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

