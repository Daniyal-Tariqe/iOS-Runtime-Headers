/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSURL, NSString, NSData;

@interface MCWebClipPayload : MCPayload {
    NSURL *_URL;
    BOOL _fullScreen;
    NSData *_iconData;
    BOOL _isRemovable;
    NSString *_label;
    BOOL _precomposed;
}

@property(readonly) NSURL * URL;
@property(readonly) BOOL fullScreen;
@property(readonly) NSData * iconData;
@property(readonly) BOOL isRemovable;
@property(readonly) NSString * label;
@property(readonly) BOOL precomposed;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)URL;
- (void)dealloc;
- (id)description;
- (BOOL)fullScreen;
- (id)iconData;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)isRemovable;
- (id)label;
- (BOOL)precomposed;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end
