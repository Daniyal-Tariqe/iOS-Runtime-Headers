/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSURL, GEOSessionID;

@interface GEOQueryCollector : NSObject {
    double _lastSessionCreationTime;
    NSURL *_serverURL;
    GEOSessionID *_sessionID;
}

+ (id)sharedCollector;

- (void)_updateSessionIDIfNeeded;
- (void)cancelAllSubmissions;
- (void)dealloc;
- (id)init;
- (void)submitQuery:(id)arg1 requestType:(int)arg2 centerCoordinate:(struct { double x1; double x2; })arg3 latSpan:(int)arg4 lonSpan:(int)arg5 zoomLevel:(int)arg6 userLocation:(id)arg7;

@end
