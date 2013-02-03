/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, NSError, NSString, NSData, NSSet, NSURL;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
    NSString *_accountID;
    <CoreDAVAccountInfoProvider> *_backingAccountInfoProvider;
    NSError *_error;
    NSString *_host;
    NSData *_identityPersist;
    NSString *_password;
    int _port;
    NSURL *_principalURL;
    NSString *_scheme;
    NSSet *_serverComplianceClasses;
    NSString *_serverRoot;
    BOOL _shouldFailAllTasks;
    BOOL _started;
    NSString *_user;
    NSString *_userAgentHeader;
}

@property(retain) NSString * accountID;
@property(retain) <CoreDAVAccountInfoProvider> * backingAccountInfoProvider;
@property(retain) NSError * error;
@property(retain) NSString * host;
@property(retain) NSData * identityPersist;
@property(retain) NSString * password;
@property int port;
@property(retain) NSURL * principalURL;
@property(retain) NSString * scheme;
@property(retain) NSSet * serverComplianceClasses;
@property(retain) NSString * serverRoot;
@property BOOL shouldFailAllTasks;
@property BOOL started;
@property(retain) NSString * user;
@property(retain) NSString * userAgentHeader;

- (id)accountID;
- (id)backingAccountInfoProvider;
- (void)dealloc;
- (id)description;
- (id)error;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleTrustChallenge:(id)arg1;
- (id)host;
- (id)identityPersist;
- (id)initWithAccountInfoProvider:(id)arg1;
- (id)mmeToken;
- (id)password;
- (int)port;
- (id)principalURL;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg1;
- (id)scheme;
- (id)serverComplianceClasses;
- (id)serverRoot;
- (void)setAccountID:(id)arg1;
- (void)setBackingAccountInfoProvider:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setIdentityPersist:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setServerComplianceClasses:(id)arg1;
- (void)setServerRoot:(id)arg1;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (void)setStarted:(BOOL)arg1;
- (void)setUser:(id)arg1;
- (void)setUserAgentHeader:(id)arg1;
- (BOOL)shouldFailAllTasks;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)started;
- (id)url;
- (id)user;
- (id)userAgentHeader;

@end
