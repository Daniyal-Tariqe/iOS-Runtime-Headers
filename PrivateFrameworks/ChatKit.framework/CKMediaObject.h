/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSData;

@interface CKMediaObject : NSObject {
    NSData *_data;
    double _duration;
    NSString *_exportedFilename;
    NSString *_filename;
    NSString *_mimeType;
}

@property(readonly) NSData * data;
@property double duration;
@property(readonly) NSString * exportedFilename;
@property(readonly) NSString * filename;
@property(readonly) NSString * mimeType;

+ (id)fileExtensionForMIMEType:(id)arg1;
+ (id)mimeTypesToFileExtensions;
+ (id)previewDataMIMEType;
+ (id)supportedMIMETypes;
+ (BOOL)supportsMIMEType:(id)arg1;
+ (struct CGSize { float x1; float x2; })transcodeMaxSize;

- (float)balloonHeightWithPreviewData:(id)arg1;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (void)cleanupAfterTranscode;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (void)copyToPasteboard:(id)arg1;
- (id)data;
- (id)dataFileExtensionForMedia;
- (id)dataForMedia;
- (id)dataRepresentation;
- (void)dealloc;
- (double)duration;
- (id)exportedFilename;
- (id)filename;
- (id)filenameForMedia;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (id)initWithFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3;
- (void)logMediaDiagnotics;
- (int)mediaType;
- (id)mimeType;
- (id)newPreview:(int)arg1 highlight:(BOOL)arg2;
- (id)newTranscodingForMMSWithMaxByteLength:(int)arg1;
- (id)optionsForMedia;
- (id)previewTitle;
- (void)setDuration:(double)arg1;
- (BOOL)shouldGeneratePreviewInBackground;
- (BOOL)shouldTranscodeForMMS;
- (unsigned long long)sizeInBytes;
- (id)sizeInBytesString;

@end
