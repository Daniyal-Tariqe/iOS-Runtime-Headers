/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSConditionLock, NSMutableDictionary, NSMutableArray;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {
    struct __CFDictionary { } *_attachmentSizes;
    NSMutableDictionary *_attachmentsByURL;
    NSMutableArray *_attachmentsOrder;
    BOOL _didCancelImageScalingOperations;
    unsigned int _imagesSize;
    BOOL _outgoing;
    int _priority;
    struct dispatch_queue_s { } *_scalingQueue;
    NSConditionLock *_scalingThrottle;
    unsigned int _size;
}

+ (void)beginPreventingInlinePDFs;
+ (void)endPreventingInlinePDFs;
+ (BOOL)isPreventingInlinePDFs;

- (void)_delayedSetScalingEnabled;
- (void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned int)arg2 originalSize:(unsigned int)arg3;
- (BOOL)addAttachment:(id)arg1 renamingContentID:(BOOL)arg2;
- (id)attachmentForURL:(id)arg1;
- (id)attachments;
- (void)cancelImageScalingOperations;
- (void)dealloc;
- (id)description;
- (BOOL)didCancelImageScalingOperations;
- (id)initOutgoing;
- (int)priority;
- (void)removeAttachmentsForURLs:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setScalingThrottled:(BOOL)arg1;
- (unsigned long)sizeForScale:(int)arg1 imagesOnly:(BOOL)arg2;

@end
