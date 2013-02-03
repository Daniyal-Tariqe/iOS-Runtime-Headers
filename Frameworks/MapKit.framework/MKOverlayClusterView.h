/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;

@interface MKOverlayClusterView : UIView {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    struct $_711 { 
        unsigned int levelCrossFade : 1; 
        unsigned int drawingDisabled : 1; 
    } _flags;
    NSMutableArray *_proxiedViews;
    } _viewsLock;
}

@property BOOL drawingEnabled;
@property BOOL levelCrossFade;

+ (Class)layerClass;

- (BOOL)_canDrawContent;
- (void)_setNeedsDisplayForSubview:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendCluster:(id)arg1;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)drawingEnabled;
- (id)init;
- (BOOL)levelCrossFade;
- (void)renderLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setContentScaleFactor:(float)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setLevelCrossFade:(BOOL)arg1;
- (id)splitAboutView:(id)arg1;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(int)arg3;
- (void)willRemoveSubview:(id)arg1;

@end
