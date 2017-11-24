################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../calculator/src/calc.c \
../calculator/src/calculator.c \
../calculator/src/format.c \
../calculator/src/viewer.c 

OBJS += \
./calculator/src/calc.o \
./calculator/src/calculator.o \
./calculator/src/format.o \
./calculator/src/viewer.o 

C_DEPS += \
./calculator/src/calc.d \
./calculator/src/calculator.d \
./calculator/src/format.d \
./calculator/src/viewer.d 


# Each subdirectory must supply rules for building sources it contributes
calculator/src/%.o: ../calculator/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


