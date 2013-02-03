/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

@property(retain) struct CGColor { }* backgroundColor;
@property BOOL enablePostProcessing;
@property(copy) NSArray * layerInstructions;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

+ (id)videoCompositionInstruction;

- (struct CGColor { }*)backgroundColor;
- (BOOL)enablePostProcessing;
- (id)layerInstructions;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (void)setLayerInstructions:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
