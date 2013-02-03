/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPanoramaLoaderProxy, NSMapTable, MKStreetView, NSString, <MKPanoramaThumbnailDelegate>, GMMMapPoint, NSArray;

@interface MKPanoramaInternal : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        double latitude; 
        double longitude; 
    float annotationHeight;
    float annotationHorizonHeight;
    NSArray *annotations;
    double cameraPitch;
    } coordinate;
    BOOL cubic;
    BOOL hasMetadata;
    unsigned int heapTime;
    double horizontalFOV;
    } imageSize;
    BOOL isDisabled;
    MKPanoramaLoaderProxy *loaderProxy;
    struct CGImage { } *mapImageRef;
    GMMMapPoint *mapPoint;
    double maxVisiblePitch;
    unsigned int maxZoomLevel;
    double minVisiblePitch;
    NSString *panoramaID;
    NSString *streetName;
    NSString *streetNumber;
    unsigned int throttleFlags;
    unsigned int throttleTimeInterval;
    <MKPanoramaThumbnailDelegate> *thumbView;
    NSMapTable *thumbnails;
    unsigned int tileByteCount;
    NSMapTable *tileDataTable;
    } tileSize;
    double tiltPitch;
    double tiltYaw;
    unsigned int updateTime;
    MKStreetView *view;
    double yaw;
}

@end
