/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDirectionsIconRequest, GMMMapInfo, NSMutableArray, GMMDateTime;

@interface GMMDirectionsRequest : PBRequest {
    BOOL _addStepNoticesToInstructionText;
    BOOL _hasAddStepNoticesToInstructionText;
    BOOL _hasIncludeStreetViewPanoId;
    BOOL _hasIncludeStructuredInstructions;
    BOOL _hasRequestedResultType;
    BOOL _hasRequestedTimeType;
    BOOL _hasResultPageOffset;
    BOOL _hasReturnMultipleRoutes;
    BOOL _hasTripMaxCount;
    GMMDirectionsIconRequest *_iconRequest;
    BOOL _includeStreetViewPanoId;
    BOOL _includeStructuredInstructions;
    GMMMapInfo *_mapViewport;
    NSMutableArray *_modes;
    NSMutableArray *_optionss;
    GMMDateTime *_requestedDateTime;
    int _requestedResultType;
    int _requestedTimeType;
    int _resultPageOffset;
    BOOL _returnMultipleRoutes;
    int _tripMaxCount;
    NSMutableArray *_waypoints;
}

@property BOOL addStepNoticesToInstructionText;
@property(readonly) BOOL hasAddStepNoticesToInstructionText;
@property(readonly) BOOL hasIconRequest;
@property(readonly) BOOL hasIncludeStreetViewPanoId;
@property(readonly) BOOL hasIncludeStructuredInstructions;
@property(readonly) BOOL hasMapViewport;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) BOOL hasRequestedResultType;
@property(readonly) BOOL hasRequestedTimeType;
@property(readonly) BOOL hasResultPageOffset;
@property(readonly) BOOL hasReturnMultipleRoutes;
@property(readonly) BOOL hasTripMaxCount;
@property(retain) GMMDirectionsIconRequest * iconRequest;
@property BOOL includeStreetViewPanoId;
@property BOOL includeStructuredInstructions;
@property(retain) GMMMapInfo * mapViewport;
@property(retain) NSMutableArray * modes;
@property(readonly) int modesCount;
@property(retain) NSMutableArray * optionss;
@property(readonly) int optionssCount;
@property(retain) GMMDateTime * requestedDateTime;
@property int requestedResultType;
@property int requestedTimeType;
@property int resultPageOffset;
@property BOOL returnMultipleRoutes;
@property int tripMaxCount;
@property(retain) NSMutableArray * waypoints;
@property(readonly) int waypointsCount;

- (void)addMode:(int)arg1;
- (void)addOptions:(id)arg1;
- (BOOL)addStepNoticesToInstructionText;
- (void)addWaypoint:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasAddStepNoticesToInstructionText;
- (BOOL)hasIconRequest;
- (BOOL)hasIncludeStreetViewPanoId;
- (BOOL)hasIncludeStructuredInstructions;
- (BOOL)hasMapViewport;
- (BOOL)hasRequestedDateTime;
- (BOOL)hasRequestedResultType;
- (BOOL)hasRequestedTimeType;
- (BOOL)hasResultPageOffset;
- (BOOL)hasReturnMultipleRoutes;
- (BOOL)hasTripMaxCount;
- (id)iconRequest;
- (BOOL)includeStreetViewPanoId;
- (BOOL)includeStructuredInstructions;
- (id)init;
- (id)mapViewport;
- (int)modeAtIndex:(unsigned int)arg1;
- (id)modes;
- (int)modesCount;
- (id)optionsAtIndex:(unsigned int)arg1;
- (id)optionss;
- (int)optionssCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedDateTime;
- (int)requestedResultType;
- (int)requestedTimeType;
- (Class)responseClass;
- (int)resultPageOffset;
- (BOOL)returnMultipleRoutes;
- (void)setAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)setIconRequest:(id)arg1;
- (void)setIncludeStreetViewPanoId:(BOOL)arg1;
- (void)setIncludeStructuredInstructions:(BOOL)arg1;
- (void)setMapViewport:(id)arg1;
- (void)setMode:(int)arg1 atIndex:(unsigned int)arg2;
- (void)setModes:(id)arg1;
- (void)setOptions:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setOptionss:(id)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setRequestedResultType:(int)arg1;
- (void)setRequestedTimeType:(int)arg1;
- (void)setResultPageOffset:(int)arg1;
- (void)setReturnMultipleRoutes:(BOOL)arg1;
- (void)setTripMaxCount:(int)arg1;
- (void)setWaypoint:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setWaypoints:(id)arg1;
- (int)tripMaxCount;
- (id)waypointAtIndex:(unsigned int)arg1;
- (id)waypoints;
- (int)waypointsCount;
- (void)writeTo:(id)arg1;

@end
