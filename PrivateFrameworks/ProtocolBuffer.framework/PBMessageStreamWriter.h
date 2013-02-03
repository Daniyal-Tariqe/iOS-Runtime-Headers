/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class PBDataWriter, PBStreamWriter;

@interface PBMessageStreamWriter : NSObject {
    PBDataWriter *_messageWriter;
    PBStreamWriter *_writer;
}

@property(retain) PBDataWriter * messageWriter;
@property(retain) PBStreamWriter * writer;

- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (id)messageWriter;
- (void)setMessageWriter:(id)arg1;
- (void)setWriter:(id)arg1;
- (BOOL)writeMessage:(id)arg1;
- (id)writer;

@end
