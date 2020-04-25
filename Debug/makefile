################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include utilities/subdir.mk
-include touchpanel/subdir.mk
-include startup/subdir.mk
-include source/subdir.mk
-include drivers/subdir.mk
-include device/subdir.mk
-include config/subdir.mk
-include component/uart/subdir.mk
-include component/serial_manager/subdir.mk
-include component/lists/subdir.mk
-include board/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: LEGO_SmartCity.axf

# Tool invocations
LEGO_SmartCity.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:\Users\DELL\Desktop\Wbudowane\LEGO_SmartCity\libs" -L"C:\Users\DELL\Desktop\Wbudowane\LEGO_SmartCity\emwin\emWin_library\MCUXpresso" -Xlinker -Map="LEGO_SmartCity.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -T "emwin_touch_and_draw_Debug.ld" -o "LEGO_SmartCity.axf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) LEGO_SmartCity.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "LEGO_SmartCity.axf"; # arm-none-eabi-objcopy -v -O binary "LEGO_SmartCity.axf" "LEGO_SmartCity.bin" ; # checksum -p LPC54628J512 -d "LEGO_SmartCity.bin";
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
