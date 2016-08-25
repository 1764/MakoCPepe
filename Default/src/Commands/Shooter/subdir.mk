################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/Shooter/IntakeWithSpindle.cpp \
../src/Commands/Shooter/PIDShoot.cpp \
../src/Commands/Shooter/Shoot.cpp 

OBJS += \
./src/Commands/Shooter/IntakeWithSpindle.o \
./src/Commands/Shooter/PIDShoot.o \
./src/Commands/Shooter/Shoot.o 

CPP_DEPS += \
./src/Commands/Shooter/IntakeWithSpindle.d \
./src/Commands/Shooter/PIDShoot.d \
./src/Commands/Shooter/Shoot.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/Shooter/%.o: ../src/Commands/Shooter/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


