/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKLoopbackService : CKService {
    NSMutableArray *_conversations;
}

+ (id)sharedLoopbackService;

- (void)_reallySendMessage:(id)arg1;
- (void)_receiveMessageForMessage:(id)arg1;
- (void)addMessageToStore:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (id)conversationSummaries:(id*)arg1 groupIDs:(id*)arg2;
- (int)createConversationWithRecipients:(id)arg1;
- (BOOL)dbFull;
- (void)dealloc;
- (void)fixupNames;
- (id)lookupRecipientsForConversation:(id)arg1;
- (id)messagesForConversation:(id)arg1 limit:(int)arg2 moreToLoad:(BOOL*)arg3;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (void)sendMessage:(id)arg1;
- (BOOL)supportsMediaAttachments;
- (int)unreadConversationCount;
- (int)unreadCount;
- (int)unreadCountForConversation:(id)arg1;

@end
