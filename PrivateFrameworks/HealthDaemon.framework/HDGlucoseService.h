/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDGlucoseService : HDHealthService {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_waitingSamples;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *waitingSamples;

+ (int)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (void)deviceDisconnecting;
- (void)handleContextInformation:(id)arg1;
- (void)handleGlucoseMeasurement:(id)arg1;
- (id)initWithDeviceManager:(id)arg1 propertyManager:(id)arg2 healthDaemon:(id)arg3 peripheral:(id)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setWaitingSamples:(id)arg1;
- (id)waitingSamples;

@end