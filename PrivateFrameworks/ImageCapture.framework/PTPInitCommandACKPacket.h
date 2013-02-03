/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;

@interface PTPInitCommandACKPacket : NSObject {
    unsigned int _connectionNumber;
    NSString *_responderFriendlyName;
    unsigned char _responderGUID[16];
}

- (unsigned long)connectionNumber;
- (id)contentForTCP;
- (void)dealloc;
- (id)description;
- (id)initWithConnectionNumber:(unsigned long)arg1 responderGUID:(char *)arg2 responderFriendlyName:(id)arg3;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)responderFriendlyName;
- (const char *)responderGUID;
- (id)responderGUIDString;
- (void)setConnectionNumber:(unsigned long)arg1;
- (void)setResponderFriendlyName:(id)arg1;
- (void)setResponderGUID:(char *)arg1;

@end
