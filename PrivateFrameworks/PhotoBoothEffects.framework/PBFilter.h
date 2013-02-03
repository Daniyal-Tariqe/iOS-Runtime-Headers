/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PBCompiledFilter, NSString;

@interface PBFilter : NSObject {
    void *_priv;
}

@property(retain) PBCompiledFilter * compiledFilter;
@property(readonly) unsigned int kernelArgCount;
@property(retain,readonly) NSString * openCLKernelName;

+ (id)defaultValueForKey:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;

- (int (*)())kernelWrapper;
- (const char *)_fragmentShaderSource;
- (id)_glesAttributes;
- (id)_glesUniforms;
- (id)_lookupTableForName:(id)arg1;
- (id)_lookupTableNames;
- (id)_presentationName;
- (const char *)_vertexShaderSource;
- (BOOL)allowAbsoluteGestures;
- (id)compiledFilter;
- (void)dealloc;
- (id)description;
- (float)floatValueForKeyIfSupported:(id)arg1;
- (void)handleGestureAtLocations:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2 translation:(struct CGPoint { float x1; float x2; })arg3 viewSize:(struct CGSize { float x1; float x2; })arg4 stateBegan:(BOOL)arg5 mirror:(BOOL)arg6;
- (void)handlePanGesture:(struct CGPoint { float x1; float x2; })arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 stateBegan:(BOOL)arg3 mirror:(BOOL)arg4;
- (void)handlePinchGesture:(float)arg1 stateBegan:(BOOL)arg2;
- (void)handleRotateGesture:(float)arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3;
- (void)handleTapGesture:(struct CGPoint { float x1; float x2; })arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 mirror:(BOOL)arg3;
- (id)init;
- (id)inputKeys;
- (unsigned long)kernelArgCount;
- (id)localizedName;
- (id)name;
- (id)openCLKernelName;
- (struct CGPoint { float x1; float x2; })pointValueForKeyIfSupported:(id)arg1;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 outputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 mirrored:(BOOL)arg4;
- (void)setCompiledFilter:(id)arg1;
- (void)setDefaults;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (void)setPointValue:(struct CGPoint { float x1; float x2; })arg1 forKeyIfSupported:(id)arg2;
- (void)setupKernelArguments:(id)arg1 mirrored:(BOOL)arg2;

@end
