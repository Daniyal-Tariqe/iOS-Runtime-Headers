/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {
    int mCurrentTextType;
    WBReader *mReader;
}

@property int currentTextType;
@property WBReader * reader;

- (int)currentTextType;
- (id)initWithClient:(Class)arg1;
- (id)reader;
- (void)setCurrentTextType:(int)arg1;
- (void)setReader:(id)arg1;

@end
