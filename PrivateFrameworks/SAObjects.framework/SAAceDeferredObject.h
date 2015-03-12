/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSArray, NSString;

@interface SAAceDeferredObject : SABaseCommand <SAAceSerializable, SAAceCommand, SAClientBoundCommand, SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * key;
@property(copy) NSString * refId;
@property(readonly) Class superclass;
@property(retain) <SAAceSerializable> * value;

+ (id)aceDeferredObject;
+ (id)aceDeferredObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)callbacks;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (BOOL)requiresResponse;
- (void)setAppId:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end