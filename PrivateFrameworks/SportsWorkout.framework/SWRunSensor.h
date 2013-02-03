/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class <SWRunSensorPacketObserver>;

@interface SWRunSensor : SWAccessory {
    <SWRunSensorPacketObserver> *_packetObserver;
}

@property(readonly) unsigned int remainingBatteryLifetimeInHours;

+ (unsigned int)remainingHoursConsideredToBeLowBattery;

- (void)setPacketObserver:(id)arg1;

@end
