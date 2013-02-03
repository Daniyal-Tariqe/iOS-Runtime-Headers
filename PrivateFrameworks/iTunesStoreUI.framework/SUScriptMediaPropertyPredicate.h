/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property(getter=_comparisonType,retain,readonly) NSString * comparisonType;
@property(readonly) MPMediaPropertyPredicate * nativePredicate;
@property(getter=_property,retain,readonly) NSString * property;
@property(getter=_value,retain,readonly) id value;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_className;
- (id)_comparisonType;
- (id)_copyComparisonType;
- (id)_copyProperty;
- (id)_copyValue;
- (id)_playlistAttributesForScriptArray:(id)arg1;
- (id)_property;
- (void)_setProperty:(id)arg1 value:(id)arg2 comparisonType:(int)arg3;
- (id)_value;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)nativePredicate;
- (void)set_comparisonType:(id)arg1;
- (void)set_property:(id)arg1;
- (void)set_value:(id)arg1;

@end
