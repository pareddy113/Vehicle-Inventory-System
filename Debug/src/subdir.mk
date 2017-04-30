################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Car.cpp \
../src/CarPtr.cpp \
../src/Client.cpp \
../src/Date.cpp \
../src/FileHandle.cpp \
../src/String.cpp 

OBJS += \
./src/Car.o \
./src/CarPtr.o \
./src/Client.o \
./src/Date.o \
./src/FileHandle.o \
./src/String.o 

CPP_DEPS += \
./src/Car.d \
./src/CarPtr.d \
./src/Client.d \
./src/Date.d \
./src/FileHandle.d \
./src/String.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


