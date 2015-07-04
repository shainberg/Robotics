################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Location.cpp \
../Main.cpp \
../Map.cpp \
../Matrix.cpp \
../PathFinder.cpp \
../Point.cpp \
../Utils.cpp \
../lodepng.cpp 

OBJS += \
./Location.o \
./Main.o \
./Map.o \
./Matrix.o \
./PathFinder.o \
./Point.o \
./Utils.o \
./lodepng.o 

CPP_DEPS += \
./Location.d \
./Main.d \
./Map.d \
./Matrix.d \
./PathFinder.d \
./Point.d \
./Utils.d \
./lodepng.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/usr/local/include/player-2.0 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


