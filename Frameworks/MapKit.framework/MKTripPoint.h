/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSError, CLHeading;

@interface MKTripPoint : NSObject {
    int _commandType;
    NSError *_error;
    CLHeading *_heading;
    CLLocation *_location;
    int _locationSource;
    int _pointType;
}

@property int commandType;
@property(retain) NSError * error;
@property(retain) CLHeading * heading;
@property(retain) CLLocation * location;
@property int locationSource;
@property int pointType;

+ (id)tripPoint;

- (int)commandType;
- (void)dealloc;
- (id)error;
- (id)heading;
- (id)location;
- (int)locationSource;
- (int)pointType;
- (void)setCommandType:(int)arg1;
- (void)setError:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationSource:(int)arg1;
- (void)setPointType:(int)arg1;

@end
