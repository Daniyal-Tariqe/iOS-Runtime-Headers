/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
    NSString *_accountID;
    int _dataclass;
}

@property(readonly) NSString * accountID;
@property(readonly) int dataclass;

- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataclass;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)isEqual:(id)arg1;

@end
