/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject {
    id _mode;
}

@property(readonly) float pixelAspectRatio;
@property(readonly) struct CGSize { float width; float height; } size;

+ (id)screenModeForDisplayMode:(id)arg1;

- (id)_displayMode;
- (BOOL)_isNTSCOrPAL;
- (id)description;
- (id)initWithDisplayMode:(id)arg1;
- (float)pixelAspectRatio;
- (struct CGSize { float x1; float x2; })size;

@end
