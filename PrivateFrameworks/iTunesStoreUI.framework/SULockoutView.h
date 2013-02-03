/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView, UILabel, NSString, UIImage;

@interface SULockoutView : UIView {
    UILabel *_bodyLabel;
    UIImageView *_imageView;
    int _layoutPreset;
    UILabel *_titleLabel;
}

@property(retain) NSString * body;
@property(retain) UIImage * image;
@property int layoutPreset;
@property(retain) NSString * title;

- (id)_bodyLabel;
- (id)_imageView;
- (void)_layoutForSlowNetwork;
- (id)_titleLabel;
- (id)body;
- (void)dealloc;
- (id)image;
- (int)layoutPreset;
- (void)layoutSubviews;
- (void)setBody:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLayoutPreset:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
