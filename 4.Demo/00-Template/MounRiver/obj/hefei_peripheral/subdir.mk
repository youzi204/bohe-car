################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_HC_SR04.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_L9110S_2.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_TM1637.c \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_WS2812b.c 

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
hefei_peripheral/HF_HC_SR04.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_HC_SR04.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_peripheral/HF_L9110S_2.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_L9110S_2.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_peripheral/HF_TM1637.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_TM1637.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
hefei_peripheral/HF_WS2812b.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/hefei_peripheral/HF_WS2812b.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

