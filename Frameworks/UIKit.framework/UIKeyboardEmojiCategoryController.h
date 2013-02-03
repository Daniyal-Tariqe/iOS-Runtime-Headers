/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, <UIKeyboardEmojiController>, NSMutableDictionary;

@interface UIKeyboardEmojiCategoryController : NSObject {
    NSMutableDictionary *_defaultsData;
    NSMutableDictionary *categories;
    <UIKeyboardEmojiController> *emojiController;
}

@property(retain) NSDictionary * defaultsData;

- (id)categoryForKey:(id)arg1;
- (void)dealloc;
- (id)defaultsData;
- (id)initWithController:(id)arg1;
- (void)releaseCategories;
- (void)setDefaultsData:(id)arg1;
- (void)updateRecents;

@end
