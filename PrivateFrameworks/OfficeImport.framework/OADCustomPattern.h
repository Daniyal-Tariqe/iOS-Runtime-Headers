/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBlipRef;

@interface OADCustomPattern : OADPattern {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (id)blipRef;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isBlipRefOverridden;
- (BOOL)isEqual:(id)arg1;
- (void)setBlipRef:(id)arg1;

@end
