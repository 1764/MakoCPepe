################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/BallSensor.cpp \
../src/Subsystems/DriveTrain.cpp \
../src/Subsystems/Flywheel.cpp \
../src/Subsystems/FlywheelPID.cpp \
../src/Subsystems/Lifter.cpp \
../src/Subsystems/Piston.cpp \
../src/Subsystems/Spindle.cpp 

OBJS += \
./src/Subsystems/BallSensor.o \
./src/Subsystems/DriveTrain.o \
./src/Subsystems/Flywheel.o \
./src/Subsystems/FlywheelPID.o \
./src/Subsystems/Lifter.o \
./src/Subsystems/Piston.o \
./src/Subsystems/Spindle.o 

CPP_DEPS += \
./src/Subsystems/BallSensor.d \
./src/Subsystems/DriveTrain.d \
./src/Subsystems/Flywheel.d \
./src/Subsystems/FlywheelPID.d \
./src/Subsystems/Lifter.d \
./src/Subsystems/Piston.d \
./src/Subsystems/Spindle.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


