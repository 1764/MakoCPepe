################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/PistonArm/ArmDown.cpp \
../src/Commands/PistonArm/ArmIn.cpp \
../src/Commands/PistonArm/ArmOut.cpp \
../src/Commands/PistonArm/ArmUp.cpp 

OBJS += \
./src/Commands/PistonArm/ArmDown.o \
./src/Commands/PistonArm/ArmIn.o \
./src/Commands/PistonArm/ArmOut.o \
./src/Commands/PistonArm/ArmUp.o 

CPP_DEPS += \
./src/Commands/PistonArm/ArmDown.d \
./src/Commands/PistonArm/ArmIn.d \
./src/Commands/PistonArm/ArmOut.d \
./src/Commands/PistonArm/ArmUp.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/PistonArm/%.o: ../src/Commands/PistonArm/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


