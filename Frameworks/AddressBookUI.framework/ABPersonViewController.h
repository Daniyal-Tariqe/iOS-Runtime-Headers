/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABModel, UIFont, <ABPersonViewControllerDelegate>, UIView, <ABPersonEditDelegate>, NSString, <ABStyleProvider>, NSArray;

@interface ABPersonViewController : UIViewController {
    struct __CFArray { } *_displayedProperties;
    id _helper;
    <ABPersonViewControllerDelegate> *_personViewDelegate;
}

@property void* addressBook;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsCancel;
@property BOOL allowsConferencing;
@property BOOL allowsDeletion;
@property BOOL allowsEditing;
@property BOOL allowsSettingAsPreferredCardForName;
@property BOOL allowsSharing;
@property BOOL allowsSounds;
@property BOOL appearsInLinkingPeoplePicker;
@property(copy) NSString * attribution;
@property(retain) UIView * customFooterView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customMessageView;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property <ABPersonEditDelegate> * editDelegate;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(retain) ABModel * model;
@property(retain) UIView * personHeaderView;
@property BOOL personHeaderViewScrolls;
@property <ABPersonViewControllerDelegate> * personViewDelegate;
@property(copy) NSString * shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUI;
@property(retain) <ABStyleProvider> * styleProvider;

+ (id)arrayByWrappingIntegersInCFArray:(struct __CFArray { }*)arg1;
+ (struct __CFArray { }*)newCFArrayByUnwrappingIntegersInArray:(id)arg1;

- (BOOL)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (int)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsCancel;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (BOOL)allowsEditing;
- (BOOL)allowsSettingAsPreferredCardForName;
- (BOOL)allowsSharing;
- (BOOL)allowsSounds;
- (BOOL)appearsInLinkingPeoplePicker;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
- (id)attribution;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)cancelEditing:(BOOL)arg1;
- (id)customFooterView;
- (id)customHeaderView;
- (id)customMessageView;
- (void)dealloc;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (void)editAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)editCancel:(id)arg1;
- (id)editDelegate;
- (void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2;
- (id)helper;
- (void)ignoreNextLocalChange;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithModel:(id)arg1 style:(int)arg2;
- (id)initWithModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 model:(id)arg4 style:(int)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 model:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 model:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (BOOL)isReadonly;
- (void)loadView;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)manuallyLinkPerson:(void*)arg1;
- (BOOL)manuallyUnlinkPerson:(void*)arg1;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (void)model:(id)arg1 localChangeWithInfo:(struct __CFDictionary { }*)arg2;
- (id)model;
- (void)modelDatabaseChange:(id)arg1;
- (void)peoplePickerLinkButtonTapped;
- (id)personHeaderView;
- (BOOL)personHeaderViewScrolls;
- (id)personViewDelegate;
- (void)pickerCancel:(id)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)saveChanges;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (void)setCustomAppearanceProvider:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setDisplayedPropertiesAsIntegers:(struct __CFArray { }*)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPeopleForUnifiedCard:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPersonHeaderViewScrolls:(BOOL)arg1;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)shouldShowLinkingUI;
- (id)styleProvider;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)updateNavigationButtons;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)updateRecord;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
