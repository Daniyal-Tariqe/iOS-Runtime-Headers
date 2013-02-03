/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MimePart;

@interface MimeTextAttachment : MessageTextAttachment {
    MimePart *_mimePart;
}

- (unsigned int)approximateSize;
- (void)dealloc;
- (id)description;
- (id)displayedMimePart;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (BOOL)hasBeenDownloaded;
- (id)initWithMimePart:(id)arg1;
- (id)mimePart;
- (void)setMimePart:(id)arg1;

@end
