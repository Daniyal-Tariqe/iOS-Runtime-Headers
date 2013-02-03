/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSData;

@interface MKPanoramaDecoderRequest : MKPanoramaRequest {
    int extendDown;
    int extendRight;
    NSData *imageData;
    unsigned int texture;
}

@property int extendDown;
@property int extendRight;
@property(retain) NSData * imageData;
@property unsigned int texture;

- (void)dealloc;
- (id)description;
- (int)extendDown;
- (int)extendRight;
- (id)imageData;
- (id)initWithPanoramaID:(id)arg1 tilePath:(int)arg2 imageData:(id)arg3;
- (void)setExtendDown:(int)arg1;
- (void)setExtendRight:(int)arg1;
- (void)setImageData:(id)arg1;
- (void)setTexture:(unsigned int)arg1;
- (unsigned int)texture;

@end
