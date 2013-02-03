/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString, GMMDateTime;

@interface GMMStep : PBCodable {
    NSMutableArray *_alertIndexs;
    NSString *_arrivalAddress;
    GMMDateTime *_arrivalDateTime;
    NSString *_departureAddress;
    GMMDateTime *_departureDateTime;
    int _departureIntervalSeconds;
    int _departurePointIndex;
    NSString *_deprecatedDistance;
    NSString *_deprecatedDuration;
    NSString *_direction;
    int _distanceMeters;
    int _durationSeconds;
    BOOL _hasDepartureIntervalSeconds;
    BOOL _hasDeparturePointIndex;
    BOOL _hasDistanceMeters;
    BOOL _hasDurationSeconds;
    BOOL _hasIconId;
    BOOL _hasManeuverTurnNumber;
    BOOL _hasManeuverTurnSide;
    BOOL _hasManeuverType;
    BOOL _hasShowInInstructions;
    BOOL _hasStepType;
    BOOL _hasTransitAgencyIndex;
    long long _iconId;
    NSString *_iconSummaryText;
    NSString *_instructions;
    int _maneuverTurnNumber;
    int _maneuverTurnSide;
    int _maneuverType;
    NSMutableArray *_notices;
    BOOL _showInInstructions;
    NSMutableArray *_stepCues;
    int _stepType;
    NSString *_streetViewPanoId;
    int _transitAgencyIndex;
}

@property(retain) NSMutableArray * alertIndexs;
@property(readonly) int alertIndexsCount;
@property(retain) NSString * arrivalAddress;
@property(retain) GMMDateTime * arrivalDateTime;
@property(retain) NSString * departureAddress;
@property(retain) GMMDateTime * departureDateTime;
@property int departureIntervalSeconds;
@property int departurePointIndex;
@property(retain) NSString * deprecatedDistance;
@property(retain) NSString * deprecatedDuration;
@property(retain) NSString * direction;
@property int distanceMeters;
@property int durationSeconds;
@property(readonly) BOOL hasArrivalAddress;
@property(readonly) BOOL hasArrivalDateTime;
@property(readonly) BOOL hasDepartureAddress;
@property(readonly) BOOL hasDepartureDateTime;
@property(readonly) BOOL hasDepartureIntervalSeconds;
@property(readonly) BOOL hasDeparturePointIndex;
@property(readonly) BOOL hasDeprecatedDistance;
@property(readonly) BOOL hasDeprecatedDuration;
@property(readonly) BOOL hasDirection;
@property(readonly) BOOL hasDistanceMeters;
@property(readonly) BOOL hasDurationSeconds;
@property(readonly) BOOL hasIconId;
@property(readonly) BOOL hasIconSummaryText;
@property(readonly) BOOL hasInstructions;
@property(readonly) BOOL hasManeuverTurnNumber;
@property(readonly) BOOL hasManeuverTurnSide;
@property(readonly) BOOL hasManeuverType;
@property(readonly) BOOL hasShowInInstructions;
@property(readonly) BOOL hasStepType;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) BOOL hasTransitAgencyIndex;
@property long long iconId;
@property(retain) NSString * iconSummaryText;
@property(retain) NSString * instructions;
@property int maneuverTurnNumber;
@property int maneuverTurnSide;
@property int maneuverType;
@property(retain) NSMutableArray * notices;
@property(readonly) int noticesCount;
@property BOOL showInInstructions;
@property(retain) NSMutableArray * stepCues;
@property(readonly) int stepCuesCount;
@property int stepType;
@property(retain) NSString * streetViewPanoId;
@property int transitAgencyIndex;

- (void)addAlertIndex:(int)arg1;
- (void)addNotice:(id)arg1;
- (void)addStepCue:(id)arg1;
- (int)alertIndexAtIndex:(unsigned int)arg1;
- (id)alertIndexs;
- (int)alertIndexsCount;
- (id)arrivalAddress;
- (id)arrivalDateTime;
- (void)dealloc;
- (id)departureAddress;
- (id)departureDateTime;
- (int)departureIntervalSeconds;
- (int)departurePointIndex;
- (id)deprecatedDistance;
- (id)deprecatedDuration;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)direction;
- (int)distanceMeters;
- (int)durationSeconds;
- (BOOL)hasArrivalAddress;
- (BOOL)hasArrivalDateTime;
- (BOOL)hasDepartureAddress;
- (BOOL)hasDepartureDateTime;
- (BOOL)hasDepartureIntervalSeconds;
- (BOOL)hasDeparturePointIndex;
- (BOOL)hasDeprecatedDistance;
- (BOOL)hasDeprecatedDuration;
- (BOOL)hasDirection;
- (BOOL)hasDistanceMeters;
- (BOOL)hasDurationSeconds;
- (BOOL)hasIconId;
- (BOOL)hasIconSummaryText;
- (BOOL)hasInstructions;
- (BOOL)hasManeuverTurnNumber;
- (BOOL)hasManeuverTurnSide;
- (BOOL)hasManeuverType;
- (BOOL)hasShowInInstructions;
- (BOOL)hasStepType;
- (BOOL)hasStreetViewPanoId;
- (BOOL)hasTransitAgencyIndex;
- (long long)iconId;
- (id)iconSummaryText;
- (id)init;
- (id)instructions;
- (int)maneuverTurnNumber;
- (int)maneuverTurnSide;
- (int)maneuverType;
- (id)noticeAtIndex:(unsigned int)arg1;
- (id)notices;
- (int)noticesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAlertIndex:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setAlertIndexs:(id)arg1;
- (void)setArrivalAddress:(id)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (void)setDepartureAddress:(id)arg1;
- (void)setDepartureDateTime:(id)arg1;
- (void)setDepartureIntervalSeconds:(int)arg1;
- (void)setDeparturePointIndex:(int)arg1;
- (void)setDeprecatedDistance:(id)arg1;
- (void)setDeprecatedDuration:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setDistanceMeters:(int)arg1;
- (void)setDurationSeconds:(int)arg1;
- (void)setIconId:(long long)arg1;
- (void)setIconSummaryText:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setManeuverTurnNumber:(int)arg1;
- (void)setManeuverTurnSide:(int)arg1;
- (void)setManeuverType:(int)arg1;
- (void)setNotice:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setNotices:(id)arg1;
- (void)setShowInInstructions:(BOOL)arg1;
- (void)setStepCue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setStepCues:(id)arg1;
- (void)setStepType:(int)arg1;
- (void)setStreetViewPanoId:(id)arg1;
- (void)setTransitAgencyIndex:(int)arg1;
- (BOOL)showInInstructions;
- (id)stepCueAtIndex:(unsigned int)arg1;
- (id)stepCues;
- (int)stepCuesCount;
- (int)stepType;
- (id)streetViewPanoId;
- (int)transitAgencyIndex;
- (void)writeTo:(id)arg1;

@end
