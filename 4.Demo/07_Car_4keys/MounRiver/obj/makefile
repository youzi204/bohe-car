################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include user_c/subdir.mk
-include hefei_peripheral/subdir.mk
-include hefei_libraries/board/subdir.mk
-include hefei_libraries/subdir.mk
-include CODE/subdir.mk
-include CH32V10x/Core/subdir.mk
-include CH32V10x/CH32V10x_p/Startup/subdir.mk
-include CH32V10x/CH32V10x_p/CH32V10x_Lib/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
07_Car_4keys.hex \

SECONDARY_LIST += \
07_Car_4keys.lst \

SECONDARY_SIZE += \
07_Car_4keys.siz \


# All Target
all: 07_Car_4keys.elf secondary-outputs

# Tool invocations
07_Car_4keys.elf: $(OBJS) $(USER_OBJS)
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wuninitialized  -g -T .ld -nostartfiles -Xlinker --gc-sections -L"../" -Wl,-Map,"07_Car_4keys.map" --specs=nano.specs --specs=nosys.specs -o "07_Car_4keys.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@	@
07_Car_4keys.hex: 07_Car_4keys.elf
	@	riscv-none-embed-objcopy -O ihex "07_Car_4keys.elf"  "07_Car_4keys.hex"
	@	@
07_Car_4keys.lst: 07_Car_4keys.elf
	@	riscv-none-embed-objdump --source --all-headers --demangle --line-numbers --wide "07_Car_4keys.elf" > "07_Car_4keys.lst"
	@	@
07_Car_4keys.siz: 07_Car_4keys.elf
	@	riscv-none-embed-size --format=berkeley "07_Car_4keys.elf"
	@	@
# Other Targets
clean:
	-$(RM) $(ASM_UPPER_DEPS)$(OBJS)$(SECONDARY_FLASH)$(SECONDARY_LIST)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS) 07_Car_4keys.elf
	-@
secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
