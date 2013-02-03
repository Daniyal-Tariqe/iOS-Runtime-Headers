/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKeyboardEmoji : NSObject {
    NSString *codePoint;
    NSString *imageName;
    NSString *name;
    NSString *privateCodePoint;
    NSString *publicCodePoint;
    unsigned short unicodeCharacter;
}

@property(retain) NSString * codePoint;
@property(retain) NSString * imageName;
@property(retain) NSString * name;
@property(retain) NSString * privateCodePoint;
@property(retain) NSString * publicCodePoint;
@property unsigned short unicodeCharacter;

+ (void)_initializeSafeCategory;
+ (BOOL)shouldUsePublicCodePoints;

- (id)accessibilityLabel;
- (id)codePoint;
- (void)dealloc;
- (id)image;
- (id)imageName;
- (id)initWithName:(id)arg1 imageName:(id)arg2 codePoint:(unsigned short)arg3;
- (id)name;
- (id)privateCodePoint;
- (id)publicCodePoint;
- (void)setCodePoint:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrivateCodePoint:(id)arg1;
- (void)setPublicCodePoint:(id)arg1;
- (void)setUnicodeCharacter:(unsigned short)arg1;
- (unsigned short)unicodeCharacter;

@end
