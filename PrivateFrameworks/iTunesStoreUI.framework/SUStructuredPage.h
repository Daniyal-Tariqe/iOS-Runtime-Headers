/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUStorePageProtocol, SUPageSectionGroup, SUItem, NSString, SUItemList;

@interface SUStructuredPage : NSObject <NSCopying> {
    BOOL _didShowDialog;
    int _displayStyle;
    SUItem *_item;
    SUItemList *_itemList;
    SUStorePageProtocol *_protocol;
    SUPageSectionGroup *_sectionsGroup;
    NSString *_title;
    int _type;
    BOOL _wantsIndexBar;
}

@property(readonly) BOOL didShowDialog;
@property(readonly) int displayStyle;
@property(readonly) BOOL hasDisplayableContent;
@property(retain) SUItem * item;
@property(retain) SUItemList * itemList;
@property(retain) SUStorePageProtocol * protocol;
@property(retain) SUPageSectionGroup * sectionsGroup;
@property(retain) NSString * title;
@property int type;
@property(readonly) BOOL wantsIndexBar;

+ (int)pageTypeForStorePageDictionary:(id)arg1;
+ (int)pageTypeForStorePageString:(id)arg1;

- (id)_copyItemFromDictionary:(id)arg1;
- (int)_displayStyleForString:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)didShowDialog;
- (int)displayStyle;
- (BOOL)hasDisplayableContent;
- (id)item;
- (id)itemList;
- (BOOL)loadFromDictionary:(id)arg1;
- (id)protocol;
- (id)sectionsGroup;
- (void)setItem:(id)arg1;
- (void)setItemList:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setSectionsGroup:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;
- (BOOL)wantsIndexBar;

@end
