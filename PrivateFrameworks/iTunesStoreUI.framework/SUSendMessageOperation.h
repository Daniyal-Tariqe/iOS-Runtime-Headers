/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSOperationQueue, SUMessage;

@interface SUSendMessageOperation : ISOperation {
    SUMessage *_message;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SUMessage * message;

- (id)_copyResourcesByUploadingParts:(id*)arg1;
- (id)_copyResourcesForLocalPart:(id)arg1;
- (id)_copyResourcesForUploadOperation:(id)arg1;
- (id)_newStoreURLOperationForResources:(id)arg1 error:(id*)arg2;
- (id)_newUploadOperationForMessagePart:(id)arg1;
- (BOOL)_prepareMessageParts:(id*)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (void)run;

@end
