/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
    int m_endKeyIndex;
    unsigned int m_flags;
    NSString *m_name;
    NSArray *m_nameElements;
    int m_startKeyIndex;
    id m_value;
}

@property(readonly) int endKeyIndex;
@property(readonly) unsigned int flags;
@property(readonly) BOOL isAttributesReference;
@property(readonly) BOOL isGeometryReference;
@property(readonly) BOOL isKeyIndexRangeReference;
@property(readonly) BOOL isKeyIndexReference;
@property(readonly) BOOL isKeylistReference;
@property(readonly) BOOL isKeysReference;
@property(readonly) BOOL isKeysetReference;
@property(readonly) BOOL isNamedKeyReference;
@property(readonly) NSString * keyName;
@property(readonly) NSString * keylistName;
@property(retain) NSString * name;
@property(readonly) NSArray * nameElements;
@property(readonly) int startKeyIndex;
@property(retain) id value;

+ (id)referenceWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endIndexForListCount:(unsigned int)arg1;
- (int)endKeyIndex;
- (unsigned int)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;
- (BOOL)isAttributesReference;
- (BOOL)isGeometryReference;
- (BOOL)isKeyIndexRangeReference;
- (BOOL)isKeyIndexReference;
- (BOOL)isKeylistReference;
- (BOOL)isKeysReference;
- (BOOL)isKeysetReference;
- (BOOL)isNamedKeyReference;
- (id)keyName;
- (id)keylistName;
- (id)name;
- (id)nameElements;
- (void)setFlags:(unsigned int)arg1 setStartKeyIndex:(int)arg2 setEndKeyIndex:(int)arg3;
- (void)setName:(id)arg1;
- (void)setNameElements:(id)arg1;
- (void)setValue:(id)arg1;
- (unsigned int)startIndexForListCount:(unsigned int)arg1;
- (int)startKeyIndex;
- (id)value;

@end
