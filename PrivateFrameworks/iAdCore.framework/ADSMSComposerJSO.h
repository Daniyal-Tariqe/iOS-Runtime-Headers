/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSArray, NSString, <ADJSODelegate>, WebScriptObject;

@interface ADSMSComposerJSO : ADJavaScriptObject {
    <ADJSODelegate> *_delegate;
    WebScriptObject *_listener;
    NSString *_messageBody;
    NSArray *_messageRecipients;
}

@property <ADJSODelegate> * delegate;
@property(retain) WebScriptObject * listener;
@property(copy) NSString * messageBody;
@property(retain) NSArray * messageRecipients;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptSelectors;
+ (id)scriptingKeys;

- (id)body;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)listener;
- (id)messageBody;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)messageRecipients;
- (id)recipients;
- (void)send;
- (void)setBody:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setMessageRecipients:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
