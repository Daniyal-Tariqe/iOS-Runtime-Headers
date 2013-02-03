/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet, NSArray, NSMutableArray, <UITapRecognizerDelegate>;

@interface UITapRecognizer : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _timerOn : 1;
    unsigned int _noNewTouches : 1;
    NSMutableSet *_activeTouches;
    float _allowableMovement;
    int _currentNumberOfTaps;
    int _currentNumberOfTouches;
    id _delegate;
    } _location;
    double _maximumIntervalBetweenSuccessiveTaps;
    double _maximumSingleTapDuration;
    unsigned int _numberOfTapsRequired;
    unsigned int _numberOfTouchesRequired;
    } _startPoint;
    NSMutableArray *_touches;
}

@property float allowableMovement;
@property <UITapRecognizerDelegate> * delegate;
@property double maximumIntervalBetweenSuccessiveTaps;
@property double maximumSingleTapDuration;
@property unsigned int numberOfTapsRequired;
@property unsigned int numberOfTouchesRequired;
@property(readonly) NSArray * touches;

- (struct CGPoint { float x1; float x2; })_locationOnScreen;
- (void)_reset;
- (float)allowableMovement;
- (void)clearTapTimer;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouchesRequired;
- (void)setAllowableMovement:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
