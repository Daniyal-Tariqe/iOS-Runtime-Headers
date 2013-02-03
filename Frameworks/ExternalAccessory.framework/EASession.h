/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSString, NSInputStream, NSOutputStream, EAAccessory;

@interface EASession : NSObject {
    EAAccessory *_accessory;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSString *_protocolString;
    unsigned int _sessionID;
}

@property(readonly) EAAccessory * accessory;
@property(readonly) NSInputStream * inputStream;
@property(readonly) NSOutputStream * outputStream;
@property(readonly) NSString * protocolString;

- (unsigned int)_sessionID;
- (id)_shortDescription;
- (id)accessory;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)inputStream;
- (id)outputStream;
- (id)protocolString;

@end
