/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, EKEventEditItem, <EKEventEditorDelegate>, UIResponder, UIActionSheet, EKEventStore, EKEvent;

@interface EKEventEditor : UITableViewController <EKEventEditItemDelegate, UIActionSheetDelegate> {
    UIActionSheet *_alertSheet;
    EKEventEditItem *_currentEditItem;
    NSArray *_currentItems;
    NSArray *_editItems;
    <EKEventEditorDelegate> *_editorDelegate;
    EKEvent *_event;
    BOOL _giveTitleCellKeyboardFocus;
    UIResponder *_responderToRestoreOnAppearence;
    id _revertState;
    BOOL _scrollToNotes;
    BOOL _simpleView;
    EKEventStore *_store;
}

@property <EKEventEditorDelegate> * editorDelegate;
@property(retain) EKEvent * event;
@property(retain) UIResponder * responderToRestoreOnAppearence;
@property BOOL scrollToNotes;
@property(retain) EKEventStore * store;

- (BOOL)_canDetachSingleOccurrence;
- (void)_cancelSheetButtonPressed:(int)arg1;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_copyEventForPossibleRevert;
- (void)_deleteClicked:(id)arg1;
- (void)_deleteRecurringSheetButtonPressed:(int)arg1;
- (void)_deleteSheetButtonPressed:(int)arg1;
- (void)_detachSheetButtonPressed:(int)arg1;
- (id)_editItems;
- (void)_localeChanged;
- (void)_performDelete:(int)arg1;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_pinKeyboard:(BOOL)arg1;
- (void)_presentDetachSheet;
- (void)_presentValidationAlert:(id)arg1;
- (void)_revertEvent;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)cancel:(id)arg1;
- (void)completeWithAction:(int)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)done:(id)arg1;
- (id)editorDelegate;
- (id)event;
- (void)eventEditItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2;
- (void)eventEditItemDidCommit:(id)arg1;
- (void)eventEditItemDidEndEditing:(id)arg1;
- (void)eventEditItemDidStartEditing:(id)arg1;
- (void)eventEditItemTextChanged:(id)arg1;
- (id)init;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)responderToRestoreOnAppearence;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToNotes;
- (void)setEditorDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setResponderToRestoreOnAppearence:(id)arg1;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)setStore:(id)arg1;
- (void)setupForEvent;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)store;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
