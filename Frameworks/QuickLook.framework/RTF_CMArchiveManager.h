/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableSet, NSMutableDictionary, NSString;

@interface RTF_CMArchiveManager : NSObject {
    NSMutableDictionary *mDrawableCache;
    int mHeight;
    BOOL mIsThumbnail;
    unsigned int mPageCount;
    NSMutableSet *mPausedPaths;
    NSString *mResourcePathPrefix;
    int mWidth;
}

+ (id)hashKeyFor:(id)arg1;
+ (id)resourceTypeToExtension:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;

- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)appendResourcePathToName:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (id)cssStylesheetString;
- (void)dealloc;
- (id)init;
- (BOOL)isProgressive;
- (BOOL)isThumbnail;
- (id)newResourceWithName:(id)arg1;
- (id)newResourceWithType:(int)arg1;
- (unsigned int)pageCount;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (int)resourceCount;
- (id)resourcePathPrefix;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)setHTMLHeight:(int)arg1;
- (void)setHTMLWidth:(int)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setPageCount:(unsigned int)arg1;
- (void)setResourcePathPrefix:(id)arg1;

@end
