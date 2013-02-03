/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKScrollView, UIImageView, GMMRequester, <MKMapViewDelegate><MKMapViewDelegatePrivate>, MKAnnotationView, NSMutableArray, NSTimer, UIEvent, UITapGestureRecognizer, MKMapViewPositioningChange, MKMapView, MKOverlayContainerView, UITextField, UILongPressGestureRecognizer, UILabel, MKSearchResult, MKMapTileView, <MKOverlay>, MKRouteLoader, NSArray, MKRouteOverlayView, UITouch, UIColor, MKAnnotationContainerView, UIView;

@interface MKMapViewInternal : NSObject <UITextFieldDelegate, PBRequesterDelegate, UILongPressGestureRecognizerDelegate> {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double x; 
        double y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct BillingPointTracker { int x1; int x2; struct MapPoint { 
            int latitude_; 
            int longitude_; 
            int x_pixels_at_max_zoom_; 
            int y_pixels_at_max_zoom_; 
    struct $_1092 { 
        unsigned int animateFlagWhileSuspendedResultProcessing : 1; 
        unsigned int callsDelegateForAllRegionChanges : 1; 
        unsigned int changingRegion : 1; 
        unsigned int checkTrafficAvailable : 1; 
        unsigned int debugViewHeading : 1; 
        unsigned int didStartDragging : 1; 
        unsigned int draggingInterrupted : 1; 
        unsigned int didStartSmoothScrolling : 1; 
        unsigned int drawGridBackground : 1; 
        unsigned int hasUserSpecifiedZoomLevel : 1; 
        unsigned int hot : 1; 
        unsigned int ignoreHeadingUpdates : 1; 
        unsigned int ignoreLocationUpdates : 1; 
        unsigned int isLoadingEnabled : 1; 
        unsigned int isRunningPositioningChange : 1; 
        unsigned int isSuspended : 1; 
        unsigned int levelCrossFade : 1; 
        unsigned int liveTrackingAutoSelectZoomLevel : 1; 
        unsigned int longPressing : 1; 
        unsigned int needsPerspectiveUpdate : 1; 
        unsigned int needToShowRoute : 1; 
        unsigned int pansAndZoomsToRouteStep : 1; 
        unsigned int pansAndZoomsToRouteOverview : 1; 
        unsigned int routeStartStepIsActive : 1; 
        unsigned int showsPinAtRouteStart : 1; 
        unsigned int showsPinAtRouteEnd : 1; 
        unsigned int persistFixedUserLocation : 1; 
        unsigned int recalculatesRouteStepZoomLevels : 1; 
        unsigned int regionChangeIsAnimated : 1; 
        unsigned int regionChangeIsUserInitiated : 1; 
        unsigned int rotationSupported : 1; 
        unsigned int scrollEnabled : 1; 
        unsigned int scrolling : 1; 
        unsigned int scrollIsAnimated : 1; 
        unsigned int shouldRotateForHeading : 1; 
        unsigned int showingRoute : 1; 
        unsigned int showsUserLocation : 1; 
        unsigned int suspendSearchResultProcessing : 1; 
        unsigned int trafficEnabled : 1; 
        unsigned int zoomEnabled : 1; 
        unsigned int zoomIsAnimated : 1; 
        unsigned int zooming : 1; 
        unsigned int wasZooming : 1; 
        unsigned int inSetZoomScale : 1; 
        unsigned int annotationViewsAreAddedImmediately : 1; 
        unsigned int nextPositioningChangeIsInstant : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateWillChangeRotation : 1; 
        unsigned int delegateWillChangeRotationAnimation : 1; 
        unsigned int delegateDidUpdateUserLocation : 1; 
        unsigned int delegateDidFailToLocateUser : 1; 
        unsigned int delegateWillChangeRegion : 1; 
        unsigned int delegateDidChangeRegion : 1; 
        unsigned int delegateDidStartMapRendering : 1; 
        unsigned int delegateDidFinishMapRendering : 1; 
        unsigned int delegateDidChangeUserTrackingMode : 1; 
        unsigned int delegateDidChangeUserTrackingModeButton : 1; 
    float angularVelocity;
    int animationType;
    int animationTypeHistory;
    MKAnnotationContainerView *annotationContainer;
    NSTimer *annotationTimer;
    double annotationViewPerspectiveHeading;
    UIImageView *badgeView;
        } x3; int x4; int x5; unsigned char x6; } *billingPointTracker;
    } centeringRect;
    UIView *contentView;
    UILabel *copyrightLabel;
    NSTimer *copyrightLabelTimer;
    UIColor *darkCopyrightShadowColor;
    UIColor *darkCopyrightTextColor;
    UITextField *debugView;
    NSTimer *defaultLocationTimer;
    <MKMapViewDelegate><MKMapViewDelegatePrivate> *delegate;
    NSTimer *displayPromiseTimer;
    NSMutableArray *displayPromises;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    unsigned int eventMode;
    unsigned int eventModeHistory;
    } flags;
    } futureCenterPoint;
    float futureDuration;
    float futureScale;
    float futureZoomLevelDelta;
    GMMRequester *hasTrafficRequester;
    double heading;
    NSTimer *hoverExpirationTimer;
    double hoverStartTime;
    unsigned int lastCopyrightMapType;
    unsigned int levelViewLoadingCount;
    unsigned int levelViewTrafficLoadingCount;
    UIColor *lightCopyrightShadowColor;
    UIColor *lightCopyrightTextColor;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    MKMapTileView *mapTileView;
    unsigned int mapType;
    MKOverlayContainerView *overlayContainer;
    MKMapViewPositioningChange *positioningChange;
    NSTimer *positioningChangeTimer;
    int rotationDirection;
    int rotationState;
    } routeBottomRightCoordinate;
    } routeCenterCoordinate;
    MKRouteLoader *routeLoader;
    UIImageView *routePositionView;
    } routePositionViewCoordinate;
    unsigned int routeStepIndex;
    int routeSummaryZoomLevel;
    } routeTopLeftCoordinate;
    MKRouteOverlayView *routeView;
    MKRouteOverlayView *routeViewB;
    <MKOverlay> *routeViewBModel;
    UIEvent *savedEventBegan;
    UITouch *savedTouchBegan;
    NSTimer *scrollToReCenterUserTimer;
    MKScrollView *scrollView;
    int scrollViewTouchCount;
    int searchMode;
    NSArray *searchResultsWhileSuspendedResultProcessing;
    MKSearchResult *selectedSearchResultWhileSuspendedResultProcessing;
    NSTimer *startIdleTimer;
    unsigned int suspendedIdleCount;
    NSTimer *tapAndHoldTimer;
    UITapGestureRecognizer *tapGestureRecognizer;
    unsigned int tileCount;
    MKAnnotationView *touchRecepientAnnotationView;
    NSTimer *trafficAvailabilityTimer;
    int trafficStatus;
    UITapGestureRecognizer *twoFingerTapGestureRecognizer;
    int userTrackingMode;
    MKMapView *view;
}

- (void)delayedShowAddedAnnotationsAnimated;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)longPressGestureCanTransitionToRecognizedState:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)runPositioningChangeIfNeeded:(id)arg1;
- (void)runPositioningChangeIfNeeded;
- (void)scrollToUserLocation;
- (void)showAddedAnnotationsAndRouteAnimated;
- (void)startIdle;
- (void)stopHoverWithChange:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)updateTrafficAvailable;

@end
