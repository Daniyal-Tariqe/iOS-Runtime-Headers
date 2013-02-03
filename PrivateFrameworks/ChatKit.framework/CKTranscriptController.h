/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDictionary, ABPeoplePickerNavigationController, CKTranscriptStatusController, NSMutableSet, UINavigationItem, NSMutableArray, CKLinksController, CKService, CKContentOffsetAnimation, CKMessageEncodingInfo, NSOperationQueue, NSNotification, CKMessageEntryView, PLPhotoScrollerViewController, NSNumber, UIBarButtonItem, CKRecipientListView, CKTranscriptBubbleData, UIToolbar, CKMessageComposition, UIFrameAnimation, CKRecipientGenerator, CKBalloonView, CKRecipientSelectionView, NSArray, NSIndexPath, CKMessage, CKConversation, CKTranscriptTableView, UIView, UINavigationController;

@interface CKTranscriptController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, CKTranscriptHeaderDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _isDisablingAutorotation : 1;
    unsigned int _inRotation : 1;
    unsigned int _isThrowing : 1;
    unsigned int _needsSetupForNewRecipient : 1;
    unsigned int _dirty : 1;
    unsigned int _locked : 1;
    unsigned int _visible : 1;
    unsigned int _viewNeedsSetup : 1;
    unsigned int _newRecipient : 1;
    unsigned int _rescroll : 1;
    unsigned int _sending : 1;
    unsigned int _recipientListShouldBeExpanded : 1;
    unsigned int _transitioningToTranscript : 1;
    unsigned int _entryViewCanAcceptFocus : 1;
    unsigned int _willRotateView : 1;
    unsigned int _isAnimatingMessageSend : 1;
    unsigned int _isDeleting : 1;
    unsigned int _didCancel : 1;
    unsigned int _entryViewWasActiveBeforeEdit : 1;
    unsigned int _entryViewWasActiveBeforePushingViewController : 1;
    unsigned int _recipientSelectionViewWasActiveBeforePushingViewController : 1;
    unsigned int _isShowingSearchResults : 1;
    unsigned int _automaticKeyboardWasDisabled : 1;
    unsigned int _reloadingTableView : 1;
    unsigned int _togglingEditing : 1;
    unsigned int _suspendScrollDueToMediaViewing : 1;
    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow : 1;
    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow : 1;
    NSDictionary *_abPropertiesCache;
    UIBarButtonItem *_actionItem;
    NSMutableArray *_actionSheets;
    UIToolbar *_actionsToolbar;
    UIView *_backPlacard;
    CKBalloonView *_balloonToRestoreAfterRotation;
    CKTranscriptBubbleData *_bubbleInfo;
    NSMutableArray *_bubblizationAnimations;
    UIBarButtonItem *_clearAllItem;
    id _composeDelegate;
    CKConversation *_conversation;
    CKService *_currentService;
    CKMessageEntryView *_entryView;
    int _finishedBubbs;
    int _finishedThrows;
    NSMutableSet *_hiddenIndexPaths;
    NSIndexPath *_indexPathOfHighlightedCell;
    BOOL _isReplying;
    NSNotification *_keyboardNotification;
    } _keyboardScreenFrame;
    id _lastMessage;
    CKLinksController *_linkViewController;
    NSOperationQueue *_mediaPreviewQueue;
    UIFrameAnimation *_messageEntryViewAnimation;
    CKMessage *_messageToThrow;
    UINavigationItem *_navItem;
    UINavigationController *_navigationController;
    CKMessageComposition *_newComposition;
    NSArray *_newCompositionAddresses;
    NSMutableArray *_outboundMessageLayers;
    ABPeoplePickerNavigationController *_peoplePickerController;
    PLPhotoScrollerViewController *_photoScrollerForActionSheet;
    NSMutableArray *_presetMessageParts;
    CKRecipientGenerator *_recipientGenerator;
    CKRecipientListView *_recipientListView;
    CKRecipientSelectionView *_recipientSelectionView;
    NSMutableArray *_recipients;
    NSMutableArray *_replacementMessageLayers;
    unsigned int _rotationBlockingAnimationCount;
    CKMessage *_smartForwardMessage;
    CKTranscriptStatusController *_statusBar;
    BOOL _storedStatusBarIsHidden;
    int _storedStatusBarStyle;
    CKMessageEncodingInfo *_textMessageEncodingInfo;
    NSMutableArray *_throwAnimations;
    CKContentOffsetAnimation *_transcriptAnimation;
    CKTranscriptTableView *_transcriptTable;
    float _transcriptTableBottomOffset;
    bool_canSafelyDismissImagePicker;
}

@property NSNumber * canSafelyDismissImagePicker;
@property id composeDelegate;
@property CKService * currentService;
@property(retain) CKMessage * messageToThrow;
@property(retain) NSMutableArray * presetMessageParts;
@property(retain) CKMessage * smartForwardMessage;

+ (void)_initializeSafeCategory;
+ (void)_sendDidFinishSavingImageNotificationWithImage:(id)arg1 error:(id)arg2 context:(void*)arg3;
+ (void)_sendDidFinishSavingVideoNotificationWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3;
+ (void)_sendDidStartSavingMediaNotification;
+ (id)tableColor;

- (void)CKTranscriptHeaderView:(id)arg1 buttonClicked:(short)arg2;
- (id)_abPersonViewControllerForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (id)_actionsToolbar;
- (void)_actuallyClearCurrentMessageThread;
- (void)_addPart:(id)arg1;
- (void)_addPreviewGeneratorObject:(id)arg1;
- (void)_adjustCustomTitleViewFrame:(int)arg1;
- (void)_adjustMessageEntryViewHeightDelta:(float)arg1 animate:(BOOL)arg2 animationLength:(float)arg3 fastAnimate:(BOOL)arg4;
- (void)_adjustTranscriptContentOffset:(struct CGPoint { float x1; float x2; })arg1 animate:(BOOL)arg2 animationLength:(float)arg3 fastAnimate:(BOOL)arg4;
- (float)_bottomPaddingForBubbleRow:(int)arg1;
- (void)_calculateTopVisibleRow:(int*)arg1 andOffset:(float*)arg2 forTransitionToEditing:(BOOL)arg3;
- (BOOL)_canReloadView;
- (void)_cancelMessageSendAnimations;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_characterCountUISettingDidChangeNotification:(id)arg1;
- (void)_clearActionSheets;
- (void)_clearExpandRecipientListFlag;
- (void)_computeBubbleData;
- (void)_deactivateContentEntryView;
- (void)_decrementRotationBlockingAnimationCount;
- (void)_deleteMessagesAtIndexPaths:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_deliveryReceiptsEnabledDidChangeNotification:(id)arg1;
- (void)_didEndResumeAnimation:(id)arg1;
- (BOOL)_disclosureSupportsMediaType:(int)arg1;
- (void)_displayABPersonViewController:(id)arg1;
- (BOOL)_editableAtIndexPath:(id)arg1;
- (void)_enteredForeground:(id)arg1;
- (void)_entryDebugShowEntryHUD;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_faceTimeAvailabilityChange:(id)arg1;
- (id)_fieldForFocus;
- (void)_finishedCreatingNewMessageForSending:(id)arg1;
- (void)_flashHighlightedCell;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)_generatePreviewsForMediaObject:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_hideAccessoryView;
- (void)_hideRecipientListView;
- (void)_hideTranscriptButtons;
- (void)_incrementRotationBlockingAnimationCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrame;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_makeContentEntryViewActive;
- (void)_makeFieldForFocusActive;
- (void)_makeRecipientEntryViewActive;
- (float)_maxHeightForOverlayView:(id)arg1 entryViewResize:(int)arg2;
- (float)_maximumContentOffset;
- (void*)_newPersonWithValue:(struct __CFString { }*)arg1 forMultiValueProperty:(int)arg2;
- (struct CGPoint { float x1; float x2; })_offsetForRow:(int)arg1 withInternalOffset:(float)arg2;
- (id)_overlayView;
- (float)_overlayViewMinHeight;
- (id)_personViewControllerForProps:(id)arg1;
- (void)_receivedReceiptForMessage:(id)arg1;
- (id)_recipientGenerator;
- (void)_reflowTranscriptCells;
- (void)_refreshTranscript:(BOOL)arg1;
- (void)_refreshTranscript;
- (void)_reloadTranscriptLayer;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_resetEntryViewSize;
- (void)_resetTranscriptInsets;
- (void)_saveDraftState;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (void)_setupMediaEntry;
- (void)_setupNewComposition;
- (void)_setupRecipientSelectionView;
- (void)_setupTranscriptHeader;
- (void)_setupViewForConversation;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (void)_showMediaForTranscriptStartingAtRow:(int)arg1;
- (void)_showMediaSourceSelectionSheet;
- (void)_showPhotoPickerWithSourceType:(unsigned int)arg1;
- (void)_showPhotoScrollerForTranscriptStartingAtRow:(int)arg1;
- (void)_showRecipientListView;
- (void)_showTranscriptButtons;
- (void)_showVCalViewerForRow:(int)arg1;
- (void)_showVCardViewerForRow:(int)arg1;
- (void)_shrinkRecipientList;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (id)_statusBar;
- (void)_stopAnimation:(id)arg1 exiting:(BOOL)arg2 decrementRotation:(BOOL)arg3;
- (void)_stopEntryViewAnimation:(BOOL)arg1;
- (void)_stopThrowAnimations:(BOOL)arg1;
- (void)_stopTranscriptAnimation:(BOOL)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (float)_topPaddingForBubbleRow:(int)arg1;
- (float)_topPaddingForRow:(int)arg1 forEditing:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (id)_unknownPersonViewControllerForProps:(id)arg1;
- (void)_updateActionsToolbarItems;
- (void)_updateActionsToolbarItemsForRotation:(int)arg1;
- (void)_updateCharacterCount;
- (void)_updateCharacterCountReplacingCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (void)_updateFirstResponder;
- (void)_updatePhotoButtonEnabled;
- (void)_updateRecipientListView:(BOOL)arg1;
- (void)_updateTranscriptButtons;
- (void)_updateUI;
- (void)_userDidCancelCapturingImage;
- (void)_userDidCaptureImage;
- (void)accessibilityLargeTextDidChange;
- (void)actionButtonClicked:(id)arg1;
- (id)actionItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)addMedia:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })addOutboundMessage:(id)arg1;
- (void)addPresetMessagePart:(id)arg1;
- (void)addRecipient:(void*)arg1 identifier:(int)arg2 phoneNumber:(id)arg3 makingContentEntryViewActive:(BOOL)arg4;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)animator:(id)arg1 startAnimation:(id)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)applicationWillSuspend;
- (void)balloonWillResignFirstResponder:(id)arg1;
- (struct CGPoint { float x1; float x2; })bestVisibleOffsetForBubbleAtIndex:(int)arg1;
- (void)bubbilizationAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)bubbleData;
- (BOOL)canBecomeFirstResponder;
- (id)canSafelyDismissImagePicker;
- (void)cancelButtonClicked:(id)arg1;
- (void)ckMediaPreviewGeneratorFinished:(id)arg1;
- (void)cleanUpAfterSendAttempt;
- (id)clearAllItem;
- (void)clearButtonClicked:(id)arg1;
- (void)clearComposition;
- (void)clearCurrentMessageThread;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedTargetRectForBalloon:(id)arg1;
- (id)composeDelegate;
- (id)composition;
- (id)conversation;
- (void)conversationUpdate:(id)arg1;
- (unsigned int)countOfRecipientsIfSendingMessageNow;
- (id)currentService;
- (void)dealloc;
- (id)defaultFirstResponder;
- (void)didBeginSendingComposition:(id)arg1 message:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissAlertSheet:(id)arg1;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissPeoplePicker:(id)arg1;
- (void)dismissPeoplePicker;
- (void)displayAlertSheet:(id)arg1;
- (void)entryDebugClear;
- (void)entryDebugSliderChange:(id)arg1;
- (BOOL)entryField:(id)arg1 shouldChangeContentTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)entryField:(id)arg1 shouldChangeSubjectTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)entryField:(id)arg1 shouldInsertMediaObject:(id)arg2;
- (void)entryFieldAttachmentsChanged:(id)arg1;
- (void)entryFieldContentChanged:(id)arg1;
- (void)entryFieldDidBecomeActive:(id)arg1;
- (BOOL)entryFieldShouldBecomeActive:(id)arg1;
- (void)entryFieldSubjectChanged:(id)arg1;
- (id)entryView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })entryViewFinalFrame;
- (void)findConversationForRecipients:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (id)inputAccessoryView;
- (BOOL)isNewRecipient;
- (BOOL)isSendingMessage;
- (void)linksController:(id)arg1 showABCardForLinkProperties:(id)arg2;
- (void)loadView;
- (void)messageCellTappedBalloon:(id)arg1;
- (void)messageCellTappedFailureButton:(id)arg1;
- (BOOL)messageEntryView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (id)messageToThrow;
- (void)moveCursorToEnd;
- (id)navigationItem;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (int)numberOfRows;
- (void)peoplePickerNavigationController:(id)arg1 displayedMembersOfGroup:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationControllerDisplayedGroups:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)photoBrowserController:(id)arg1 willShowActionSheetInView:(id)arg2;
- (BOOL)photoBrowserControllerShouldShowActionItem:(id)arg1;
- (void)prepareForSuspend;
- (id)presetMessageParts;
- (id)proposedRecipients;
- (void)recipientListView:(id)arg1 addressAtomClicked:(id)arg2;
- (void)recipientListView:(id)arg1 contentSizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (void)recipientSelectionView:(id)arg1 isShowingSearchResults:(BOOL)arg2;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionViewReturnPressed:(id)arg1;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (id)recipients;
- (void)reload:(BOOL)arg1;
- (void)reset;
- (void)restoreBalloonStateAfterRotation:(id)arg1;
- (void)restoreEntryViewCursor;
- (id)rotatingFooterView;
- (void)scrollBubbleIndexToVisible:(int)arg1;
- (void)scrollToMessageRowID:(int)arg1 partRowID:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)send:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)setCanSafelyDismissImagePicker:(id)arg1;
- (void)setComposeDelegate:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentService:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMessageParts:(id)arg1;
- (void)setMessageToThrow:(id)arg1;
- (void)setNewComposition:(id)arg1 addresses:(id)arg2;
- (void)setPresetMessageParts:(id)arg1;
- (void)setSmartForwardMessage:(id)arg1;
- (void)setupForNewRecipient;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showABCardForLinkProperties:(id)arg1;
- (void)showABCardForPerson:(void*)arg1 highlightedProperty:(int)arg2 identifier:(int)arg3;
- (void)showAddToExistingContactViewForEntity:(id)arg1;
- (void)showKeyboardForReply;
- (void)showNewContactViewForEntity:(id)arg1;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (void)showURLsForMessage:(id)arg1;
- (id)smartForwardMessage;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (struct CGPoint { float x1; float x2; })tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint { float x1; float x2; })arg2 context:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tearDownPeoplePicker;
- (void)throwOutboundMessageToTable:(id)arg1;
- (void)transcriptController:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarCustomView:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarTitle:(id)arg2;
- (id)transcriptTable;
- (void)transitionFromNewMessageToConversation;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (void)updateEnablednessOfSendButton;
- (void)updateNavigationButtons;
- (void)updateTitle;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
