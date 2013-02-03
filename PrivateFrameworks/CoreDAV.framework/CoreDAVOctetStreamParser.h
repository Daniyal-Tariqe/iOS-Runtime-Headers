/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, NSMutableData;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

@property(retain) NSMutableData * octetStreamData;
@property(readonly) NSError * parserError;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)octetStreamData;
- (id)parserError;
- (BOOL)processData:(id)arg1;
- (void)setOctetStreamData:(id)arg1;
- (BOOL)task:(id)arg1 receivedData:(id)arg2;

@end
