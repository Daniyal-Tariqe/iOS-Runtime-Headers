/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLoopbackMessage : CKMessage {
    BOOL _isOutgoing;
    BOOL _isPlaceholder;
    BOOL _isRead;
}

- (void)dealloc;
- (BOOL)hasBeenRead;
- (id)initPlaceholderConversation:(id)arg1 date:(id)arg2;
- (id)initWithConversation:(id)arg1 text:(id)arg2 date:(id)arg3;
- (id)initWithConversation:(id)arg1 text:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOutgoing;
- (void)markAsRead;
- (void)markAsSent;
- (int)sentCount;
- (void)setOutgoing:(BOOL)arg1;

@end
