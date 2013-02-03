/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKBKeyset, NSMutableArray;

@interface UIKBKeylayout : UIKBShape <NSCoding, NSCopying> {
    UIKBKeyset *m_keyset;
    NSString *m_name;
    NSMutableArray *m_refs;
}

@property(retain) UIKBKeyset * keyset;
@property(retain) NSString * name;
@property(readonly) NSArray * references;

+ (id)keylayout;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyset;
- (void)layoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)name;
- (id)referenceWithName:(id)arg1;
- (id)references;
- (void)setKeyset:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRef:(id)arg1;
- (void)setReferenceWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;

@end
