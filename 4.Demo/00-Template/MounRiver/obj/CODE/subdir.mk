################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/board_led.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_4keys.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_adc.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_buzzer.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_electromagnetic_board.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_four_keys.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_init.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_led_display.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_light.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_motion.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_reed_switch.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_uart.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_ultrasonic.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_value_process.c 

OBJS += \
./CODE/board_led.o \
./CODE/car_4keys.o \
./CODE/car_adc.o \
./CODE/car_buzzer.o \
./CODE/car_electromagnetic_board.o \
./CODE/car_four_keys.o \
./CODE/car_init.o \
./CODE/car_led_display.o \
./CODE/car_light.o \
./CODE/car_motion.o \
./CODE/car_reed_switch.o \
./CODE/car_uart.o \
./CODE/car_ultrasonic.o \
./CODE/car_value_process.o 

C_DEPS += \
./CODE/board_led.d \
./CODE/car_4keys.d \
./CODE/car_adc.d \
./CODE/car_buzzer.d \
./CODE/car_electromagnetic_board.d \
./CODE/car_four_keys.d \
./CODE/car_init.d \
./CODE/car_led_display.d \
./CODE/car_light.d \
./CODE/car_motion.d \
./CODE/car_reed_switch.d \
./CODE/car_uart.d \
./CODE/car_ultrasonic.d \
./CODE/car_value_process.d 


# Each subdirectory must supply rules for building sources it contributes
CODE/board_led.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/board_led.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_4keys.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_4keys.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_adc.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_buzzer.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_buzzer.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_electromagnetic_board.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_electromagnetic_board.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_four_keys.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_four_keys.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_init.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_init.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_led_display.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_led_display.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_light.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_light.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_motion.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_motion.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_reed_switch.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_reed_switch.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_uart.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_uart.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_ultrasonic.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_ultrasonic.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
CODE/car_value_process.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/00_Template/CODE/car_value_process.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

