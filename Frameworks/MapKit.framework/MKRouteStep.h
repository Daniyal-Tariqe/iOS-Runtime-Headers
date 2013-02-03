/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPolygon, MKSearchResult, MKDate, NSString, UIImage, NSArray;

@interface MKRouteStep : NSObject <MKAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    NSString *_arrivalAddress;
    MKDate *_arrivalDate;
    } _boundingMapRect;
    MKPolygon *_boundingPolygon;
    } _coordinate;
    NSString *_departureAddress;
    MKDate *_departureDate;
    int _departureIntervalSeconds;
    NSString *_direction;
    BOOL _displaysDistanceInMetric;
    int _distanceMeters;
    int _durationSeconds;
    BOOL _hasTransitAgencyIndex;
    long long _iconID;
    NSString *_instructions;
    int _mode;
    UIImage *_nonCacheableIcon;
    NSArray *_notices;
    unsigned int _numberOfPoints;
    unsigned int _pointIndex;
    MKSearchResult *_searchResult;
    unsigned int _stepIndex;
    int _transitAgencyIndex;
    int _type;
}

@property(readonly) NSString * arrivalAddress;
@property(readonly) MKDate * arrivalDate;
@property struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property(retain) MKPolygon * boundingPolygon;
@property(readonly) struct { double latitude; double longitude; } coordinate;
@property(readonly) NSString * departureAddress;
@property(readonly) MKDate * departureDate;
@property(readonly) int departureIntervalSeconds;
@property(readonly) NSString * direction;
@property(readonly) NSString * distance;
@property(readonly) int distanceMeters;
@property(readonly) int durationSeconds;
@property(readonly) BOOL hasTransitAgencyIndex;
@property(readonly) UIImage * icon;
@property(readonly) NSString * instructions;
@property(readonly) int mode;
@property(readonly) MKSearchResult * newSearchResult;
@property(readonly) NSArray * notices;
@property unsigned int numberOfPoints;
@property(readonly) unsigned int pointIndex;
@property(readonly) MKSearchResult * searchResult;
@property(readonly) NSString * shortInstructions;
@property unsigned int stepIndex;
@property(readonly) int transitAgencyIndex;
@property(readonly) NSString * tripDescription;
@property(readonly) int type;

- (id)_initWithSearchResult:(id)arg1 distanceMeters:(int)arg2 displaysMetric:(BOOL)arg3 coordinate:(struct { double x1; double x2; })arg4 type:(int)arg5 pointIndex:(unsigned int)arg6;
- (id)_initWithStep:(id)arg1 distanceMeters:(int)arg2 displaysMetric:(BOOL)arg3 type:(int)arg4 coordinate:(struct { double x1; double x2; })arg5 pointIndex:(unsigned int)arg6;
- (id)_initWithType:(int)arg1 mode:(int)arg2 coordinate:(struct { double x1; double x2; })arg3 pointIndex:(unsigned int)arg4 instructions:(id)arg5 distanceMeters:(int)arg6 displaysMetric:(BOOL)arg7 iconID:(long long)arg8;
- (id)_transitDepartureInterval;
- (id)_transitDistance;
- (id)_transitDuration;
- (id)arrivalAddress;
- (id)arrivalDate;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (id)boundingPolygon;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)departureAddress;
- (id)departureDate;
- (int)departureIntervalSeconds;
- (id)description;
- (id)direction;
- (id)distance;
- (int)distanceMeters;
- (int)durationSeconds;
- (BOOL)hasTransitAgencyIndex;
- (id)icon;
- (long long)iconID;
- (id)instructions;
- (int)mode;
- (id)newSearchResult;
- (id)nonCacheableIcon;
- (id)notices;
- (unsigned int)numberOfPoints;
- (unsigned int)pointIndex;
- (id)searchResult;
- (void)setBoundingMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundingPolygon:(id)arg1;
- (void)setNonCacheableIcon:(id)arg1;
- (void)setNumberOfPoints:(unsigned int)arg1;
- (void)setStepIndex:(unsigned int)arg1;
- (id)shortInstructions;
- (unsigned int)stepIndex;
- (id)subtitle;
- (id)title;
- (int)transitAgencyIndex;
- (id)tripDescription;
- (int)type;

@end
