/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
    BOOL _forTextPart;
    unsigned char _lastEncoded;
    unsigned int _required;
}

@property BOOL forTextPart;

- (int)appendData:(id)arg1;
- (void)done;
- (BOOL)forTextPart;
- (void)setForTextPart:(BOOL)arg1;

@end
