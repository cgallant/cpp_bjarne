################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/4_1_currency\ converter.cpp 

OBJS += \
./src/4_1_currency\ converter.o 

CPP_DEPS += \
./src/4_1_currency\ converter.d 


# Each subdirectory must supply rules for building sources it contributes
src/4_1_currency\ converter.o: ../src/4_1_currency\ converter.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/4_1_currency converter.d" -MT"src/4_1_currency\ converter.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


