/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSDictionary;

@interface SSAuthenticationContext : NSObject <NSCopying, NSMutableCopying> {
    NSString *_accountName;
    BOOL _accountNameEditable;
    int _accountScope;
    BOOL _canCreateNewAccount;
    NSString *_clientIdentifierHeader;
    BOOL _demoAccount;
    NSString *_preferredITunesStoreClient;
    int _promptStyle;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    BOOL _shouldFollowAccountButtons;
    NSDictionary *_signupRequestParameters;
    int _tokenType;
}

@property(copy,readonly) NSString * accountName;
@property(getter=isAccountNameEditable,readonly) BOOL accountNameEditable;
@property(readonly) int accountScope;
@property(readonly) BOOL canCreateNewAccount;
@property(copy,readonly) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount,readonly) BOOL demoAccount;
@property(copy,readonly) NSString * preferredITunesStoreClient;
@property(readonly) int promptStyle;
@property(copy,readonly) NSDictionary * requestParameters;
@property(retain,readonly) NSNumber * requiredUniqueIdentifier;
@property(readonly) BOOL shouldFollowAccountButtons;
@property(copy,readonly) NSDictionary * signupRequestParameters;
@property(readonly) int tokenType;

+ (id)contextForSignIn;

- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_initSSAuthenticationContext;
- (id)accountName;
- (int)accountScope;
- (BOOL)canCreateNewAccount;
- (id)clientIdentifierHeader;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)isAccountNameEditable;
- (BOOL)isDemoAccount;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredITunesStoreClient;
- (int)promptStyle;
- (id)requestParameters;
- (id)requiredUniqueIdentifier;
- (BOOL)shouldFollowAccountButtons;
- (id)signupRequestParameters;
- (int)tokenType;

@end
