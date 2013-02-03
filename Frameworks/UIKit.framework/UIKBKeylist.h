/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
    NSMutableArray *m_keys;
    NSString *m_name;
}

@property(readonly) unsigned int count;
@property(retain) NSMutableArray * keys;
@property(retain) NSString * name;

+ (id)keylist;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 keys:(id)arg2;
- (id)keyWithName:(id)arg1;
- (id)keys;
- (id)keysWithInteractionType:(id)arg1;
- (id)name;
- (void)setKeys:(id)arg1;
- (void)setName:(id)arg1;

@end
