/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHKeynoteState : GQHState {
    struct CGSize { 
        float width; 
        float height; 
    int mCurrentSlide;
    } mSlideSize;
}

- (int)currentSlide;
- (void)incrementCurrentSlide;
- (void)setSlideSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (struct CGSize { float x1; float x2; })slideSize;

@end
