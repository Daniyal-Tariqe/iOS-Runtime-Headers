/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQDBezierPath : GQDPath <GQDNameMappable> {
    BOOL mHFlip;
    BOOL mHasHFlip;
    BOOL mHasVFlip;
    struct CGPath { } *mPath;
    char *mPathStr;
    BOOL mVFlip;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (struct __CFString { }*)createCFStringFromPath:(struct CGPath { }*)arg1;
+ (struct CGPath { }*)createPathFromCString:(const char *)arg1;

- (struct CGPath { }*)createBezierPath;
- (void)dealloc;
- (BOOL)hasHorizontalFlip;
- (BOOL)hasVerticalFlip;
- (BOOL)horizontalFlip;
- (id)initWithPathString:(const char *)arg1;
- (BOOL)isRectangular;
- (struct CGPath { }*)path;
- (char *)pathStr;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (BOOL)verticalFlip;

@end
