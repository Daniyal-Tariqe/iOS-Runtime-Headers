/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface ASAccountActor : AKActor <ASAccountActorMessages> {
}

- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (id)deletedItemsFolder;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)arg1 withTag:(id*)arg2;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
- (id)foldersTag;
- (id)inboxFolder;
- (id)initWithDAAccount:(id)arg1;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 consumer:(id)arg4;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 consumer:(id)arg4;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (oneway void)performSearchQuery:(id)arg1 consumer:(id)arg2;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (BOOL)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 consumer:(id)arg8 context:(void*)arg9;
- (id)sentItemsFolder;
- (oneway void)setAccount:(id)arg1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)shutdown;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (int)supportsMailboxSearch;

@end
