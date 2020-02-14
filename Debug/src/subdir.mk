################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GPS_Watch.c \
../src/GPS_Watch_sys_main.c \
../src/HeartRateMonitor.c \
../src/HeartRateMonitor_HeartRateConstants_class.c \
../src/HeartRateMonitor_HeartRateMonitor_class.c \
../src/LOG_bridge.c \
../src/Location.c \
../src/Location_Distance_class.c \
../src/Location_GPS_class.c \
../src/Location_simulatedGPS_class.c \
../src/TIM_bridge.c \
../src/Tracking.c \
../src/Tracking_Achievement_class.c \
../src/Tracking_Display_class.c \
../src/Tracking_GoalAchievement_class.c \
../src/Tracking_GoalSpecConstants_class.c \
../src/Tracking_GoalSpec_class.c \
../src/Tracking_Goal_class.c \
../src/Tracking_HeartRateConstants_class.c \
../src/Tracking_HeartRateSample_class.c \
../src/Tracking_LapMarker_class.c \
../src/Tracking_Speed_class.c \
../src/Tracking_TrackLog_class.c \
../src/Tracking_TrackPoint_class.c \
../src/Tracking_WorkoutSession_class.c \
../src/Tracking_WorkoutTimerConstants_class.c \
../src/Tracking_WorkoutTimer_class.c \
../src/UI.c \
../src/UI_GuiBridge_bridge.c \
../src/UI_TestCase_class.c \
../src/UI_UIConstants_class.c \
../src/UI_UI_class.c \
../src/sys_user_co.c \
../src/sys_xtuml.c \
../src/my_tm1638.c

OBJS += \
./src/GPS_Watch.o \
./src/GPS_Watch_sys_main.o \
./src/HeartRateMonitor.o \
./src/HeartRateMonitor_HeartRateConstants_class.o \
./src/HeartRateMonitor_HeartRateMonitor_class.o \
./src/LOG_bridge.o \
./src/Location.o \
./src/Location_Distance_class.o \
./src/Location_GPS_class.o \
./src/Location_simulatedGPS_class.o \
./src/TIM_bridge.o \
./src/Tracking.o \
./src/Tracking_Achievement_class.o \
./src/Tracking_Display_class.o \
./src/Tracking_GoalAchievement_class.o \
./src/Tracking_GoalSpecConstants_class.o \
./src/Tracking_GoalSpec_class.o \
./src/Tracking_Goal_class.o \
./src/Tracking_HeartRateConstants_class.o \
./src/Tracking_HeartRateSample_class.o \
./src/Tracking_LapMarker_class.o \
./src/Tracking_Speed_class.o \
./src/Tracking_TrackLog_class.o \
./src/Tracking_TrackPoint_class.o \
./src/Tracking_WorkoutSession_class.o \
./src/Tracking_WorkoutTimerConstants_class.o \
./src/Tracking_WorkoutTimer_class.o \
./src/UI.o \
./src/UI_GuiBridge_bridge.o \
./src/UI_TestCase_class.o \
./src/UI_UIConstants_class.o \
./src/UI_UI_class.o \
./src/sys_user_co.o \
./src/sys_xtuml.o \
../src/my_tm1638.o

C_DEPS += \
./src/GPS_Watch.d \
./src/GPS_Watch_sys_main.d \
./src/HeartRateMonitor.d \
./src/HeartRateMonitor_HeartRateConstants_class.d \
./src/HeartRateMonitor_HeartRateMonitor_class.d \
./src/LOG_bridge.d \
./src/Location.d \
./src/Location_Distance_class.d \
./src/Location_GPS_class.d \
./src/Location_simulatedGPS_class.d \
./src/TIM_bridge.d \
./src/Tracking.d \
./src/Tracking_Achievement_class.d \
./src/Tracking_Display_class.d \
./src/Tracking_GoalAchievement_class.d \
./src/Tracking_GoalSpecConstants_class.d \
./src/Tracking_GoalSpec_class.d \
./src/Tracking_Goal_class.d \
./src/Tracking_HeartRateConstants_class.d \
./src/Tracking_HeartRateSample_class.d \
./src/Tracking_LapMarker_class.d \
./src/Tracking_Speed_class.d \
./src/Tracking_TrackLog_class.d \
./src/Tracking_TrackPoint_class.d \
./src/Tracking_WorkoutSession_class.d \
./src/Tracking_WorkoutTimerConstants_class.d \
./src/Tracking_WorkoutTimer_class.d \
./src/UI.d \
./src/UI_GuiBridge_bridge.d \
./src/UI_TestCase_class.d \
./src/UI_UIConstants_class.d \
./src/UI_UI_class.d \
./src/sys_user_co.d \
./src/sys_xtuml.d  \
./src/my_tm1683.d


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


