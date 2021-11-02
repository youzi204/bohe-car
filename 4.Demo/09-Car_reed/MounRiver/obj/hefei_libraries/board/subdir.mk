################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/board/board.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/board/clock_config.c \
C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/board/misc.c 

OBJS += \
./hefei_libraries/board/board.o \
./hefei_libraries/board/clock_config.o \
./hefei_libraries/board/misc.o 

C_DEPS += \
./hefei_libraries/board/board.d \
./hefei_libraries/board/clock_config.d \
./hefei_libraries/board/misc.d 


# Each subdirectory must supply rules for building sources it contributes
hefei_libraries/board/board.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/board/board.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/board/clock_config.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/board/clock_config.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_libraries/board/misc.o: C:/Users/Kanesh's\ laptop/Desktop/19创新基地/沁恒/20211019_V103_SmartCar_Demo_V1.0/Libraries/hefei_libraries/board/misc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\src" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries\board" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\Core" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_libraries" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\Libraries\hefei_peripheral" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\CODE" -I"C:\Users\Kanesh's laptop\Desktop\19创新基地\沁恒\20211019_V103_SmartCar_Demo_V1.0\09-Car_reed\USER\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

