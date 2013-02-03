/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface CAShapeLayer : CALayer {
}

@property struct CGColor { }* fillColor;
@property(copy) NSString * fillRule;
@property(copy) NSString * lineCap;
@property(copy) NSArray * lineDashPattern;
@property float lineDashPhase;
@property(copy) NSString * lineJoin;
@property float lineWidth;
@property float miterLimit;
@property struct CGPath { }* path;
@property struct CGColor { }* strokeColor;
@property float strokeEnd;
@property float strokeStart;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (id)_implicitActionForKey:(id)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGColor { }*)fillColor;
- (id)fillRule;
- (id)lineCap;
- (id)lineDashPattern;
- (float)lineDashPhase;
- (id)lineJoin;
- (float)lineWidth;
- (float)miterLimit;
- (struct CGPath { }*)path;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillRule:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(float)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(float)arg1;
- (void)setStrokeStart:(float)arg1;
- (struct CGColor { }*)strokeColor;
- (float)strokeEnd;
- (float)strokeStart;

@end
