################################################################################
# �Զ����ɵ��ļ�����Ҫ�༭��
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
C:/Users/user/Desktop/Smart-Car_WCH_ѧϰ����/4.Module\ data/Libraries/Device/CH32V10x_p/Startup/startup_ch32v10x.S 

OBJS += \
./CH32V10x/CH32V10x_p/Startup/startup_ch32v10x.o 

S_UPPER_DEPS += \
./CH32V10x/CH32V10x_p/Startup/startup_ch32v10x.d 


# Each subdirectory must supply rules for building sources it contributes
CH32V10x/CH32V10x_p/Startup/startup_ch32v10x.o: C:/Users/user/Desktop/Smart-Car_WCH_ѧϰ����/4.Module\ data/Libraries/Device/CH32V10x_p/Startup/startup_ch32v10x.S
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -x assembler -I"C:\Users\user\Desktop\Smart-Car_WCH_ѧϰ����\4.Module data\Libraries\Device\CH32V10x_p\Startup" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

