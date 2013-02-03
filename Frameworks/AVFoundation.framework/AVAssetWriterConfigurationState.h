/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, NSArray, AVMediaFileType;

@interface AVAssetWriterConfigurationState : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    NSURL *_URL;
    NSArray *_inputs;
    AVMediaFileType *_mediaFileType;
    NSArray *_metadataItems;
    } _movieFragmentInterval;
    int _movieTimeScale;
    BOOL _shouldOptimizeForNetworkUse;
}

@property(copy) NSURL * URL;
@property(copy) NSArray * inputs;
@property(copy) AVMediaFileType * mediaFileType;
@property(copy) NSArray * metadataItems;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
@property int movieTimeScale;
@property BOOL shouldOptimizeForNetworkUse;

- (id)URL;
- (void)dealloc;
- (id)inputs;
- (id)mediaFileType;
- (id)metadataItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (void)setInputs:(id)arg1;
- (void)setMediaFileType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (BOOL)shouldOptimizeForNetworkUse;

@end
