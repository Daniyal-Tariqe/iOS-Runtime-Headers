/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSCoding> {
}

@property(readonly) NSString * dominantScript;
@property(readonly) NSDictionary * languageMap;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;

- (id)allLanguages;
- (id)allScripts;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)arg1;
- (id)dominantScript;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)languageMap;
- (id)languagesForScript:(id)arg1;
- (unsigned int)orthographyFlags;

@end
