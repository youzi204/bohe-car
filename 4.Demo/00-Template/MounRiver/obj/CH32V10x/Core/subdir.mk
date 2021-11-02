################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/Device/Core/core_riscv.c 

OBJS += \
./CH32V10x/Core/core_riscv.o 

C_DEPS += \
./CH32V10x/Core/core_riscv.d 


# Each subdirectory must supply rules for building sources it contributes
CH32V10x/Core/core_riscv.o: C:/Users/user/Desktop/Smart-Car_WCH_学习资料/4.Module\ data/Libraries/Device/Core/core_riscv.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\Core" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\Device\CH32V10x_p\CH32V10x_Lib" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_peripheral" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\CODE" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\inc" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\00_Template\USER\src" -I"C:\Users\user\Desktop\Smart-Car_WCH_学习资料\4.Module data\Libraries\hefei_libraries\board" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

