################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/Autonomous.cpp \
../src/Commands/CheckBall.cpp \
../src/Commands/DriveForTime.cpp \
../src/Commands/DriveWithJoystick.cpp \
../src/Commands/DriveWithJoystickAccel.cpp \
../src/Commands/PutAtDistance.cpp 

OBJS += \
./src/Commands/Autonomous.o \
./src/Commands/CheckBall.o \
./src/Commands/DriveForTime.o \
./src/Commands/DriveWithJoystick.o \
./src/Commands/DriveWithJoystickAccel.o \
./src/Commands/PutAtDistance.o 

CPP_DEPS += \
./src/Commands/Autonomous.d \
./src/Commands/CheckBall.d \
./src/Commands/DriveForTime.d \
./src/Commands/DriveWithJoystick.d \
./src/Commands/DriveWithJoystickAccel.d \
./src/Commands/PutAtDistance.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


