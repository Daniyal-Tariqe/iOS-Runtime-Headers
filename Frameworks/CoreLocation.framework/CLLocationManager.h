/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, <CLLocationManagerDelegate>, NSString, CLHeading, NSSet;

@interface CLLocationManager : NSObject {
    id _internal;
}

@property(readonly) double bestAccuracy;
@property <CLLocationManagerDelegate> * delegate;
@property double desiredAccuracy;
@property double distanceFilter;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) CLHeading * heading;
@property(readonly) BOOL headingAvailable;
@property double headingFilter;
@property int headingOrientation;
@property(readonly) struct __CLClient { }* internalClient;
@property(readonly) CLLocation * location;
@property(readonly) BOOL locationServicesApproved;
@property(readonly) BOOL locationServicesAvailable;
@property(readonly) BOOL locationServicesEnabled;
@property(readonly) double maximumRegionMonitoringDistance;
@property(readonly) NSSet * monitoredRegions;
@property BOOL privateMode;
@property(copy) NSString * purpose;
@property BOOL supportInfo;

+ (int)_authorizationStatus;
+ (int)authorizationStatus;
+ (BOOL)headingAvailable;
+ (BOOL)locationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (id)sharedManager;
+ (BOOL)significantLocationChangeMonitoringAvailable;

- (id)appsUsingLocation;
- (id)appsUsingLocationWithDetails;
- (void)authorizeAppWithBundleId:(id)arg1;
- (double)bestAccuracy;
- (void)dealloc;
- (void)deauthorizeAppWithBundleId:(id)arg1;
- (id)delegate;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (double)expectedGpsUpdateInterval;
- (id)heading;
- (BOOL)headingAvailable;
- (double)headingFilter;
- (int)headingOrientation;
- (void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2;
- (id)init;
- (struct __CLClient { }*)internalClient;
- (id)location;
- (BOOL)locationServicesApproved;
- (BOOL)locationServicesAvailable;
- (BOOL)locationServicesEnabled;
- (double)maximumRegionMonitoringDistance;
- (id)monitoredRegions;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegistered:(id)arg1;
- (BOOL)privateMode;
- (id)purpose;
- (void)resetApps;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setPrivateMode:(BOOL)arg1;
- (void)setPurpose:(id)arg1;
- (void)setSupportInfo:(BOOL)arg1;
- (void)startAppStatusUpdates;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)startMonitoringSignificantLocationChanges;
- (void)startTechStatusUpdates;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)stopAppStatusUpdates;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)stopMonitoringSignificantLocationChanges;
- (void)stopTechStatusUpdates;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (BOOL)supportInfo;
- (id)technologiesInUse;

@end
