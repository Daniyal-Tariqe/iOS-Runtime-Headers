/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMAccount, NSArray, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface IMServiceImpl : IMService {
    NSArray *_abProperties;
    IMAccount *_bestAccount;
    NSMutableDictionary *_cardMap;
    NSArray *_defaultBuddyImageData;
    BOOL _defaultBuddyImageDataChecked;
    NSDictionary *_defaultSettings;
    NSArray *_emailDomains;
    BOOL _handlesChatInvites;
    id _icon;
    BOOL _iconChecked;
    NSData *_imageData;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_name;
    NSDictionary *_personToIDMap;
    unsigned int _screenNameSensitivity;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
    BOOL _supportsPhoneNumberMapping;
    BOOL _supportsSMS;
}

@property(readonly) unsigned int IDSensitivity;
@property(readonly) Class accountClass;
@property(retain,readonly) NSArray * accountIDs;
@property(retain,readonly) NSArray * addressBookProperties;
@property(retain,readonly) NSString * addressBookProperty;
@property(readonly) BOOL allowsMultipleConnections;
@property(readonly) int buddyNotesMaxByteLength;
@property(retain,readonly) NSDictionary * cardMap;
@property(retain) NSDictionary * defaultAccountSettings;
@property(retain,readonly) NSString * description;
@property(retain,readonly) NSArray * emailDomains;
@property(readonly) BOOL handlesChatInvites;
@property(retain,readonly) NSString * internalName;
@property(readonly) BOOL isPersistent;
@property(readonly) BOOL isPlugInService;
@property(retain,readonly) NSString * name;
@property(retain) NSDictionary * serviceDefaults;
@property(retain,readonly) NSData * serviceImageData;
@property(retain) NSDictionary * serviceProperties;
@property(retain,readonly) NSString * shortName;
@property(readonly) BOOL supportsAdding;
@property(readonly) BOOL supportsAuthorization;
@property(readonly) BOOL supportsIDNormalization;
@property(readonly) BOOL supportsRegistration;

+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;
+ (void)setServiceClass:(Class)arg1;
+ (id)supportedCountryCodes;
+ (BOOL)systemSupportsSMSSending;

- (unsigned int)IDSensitivity;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_dumpCardMap;
- (void)_loadDefaultImageData;
- (id)_personToIDMap;
- (void)_syncWithRemoteBuddies;
- (Class)accountClass;
- (id)accountIDs;
- (void)accountInitialSyncPerformed:(id)arg1;
- (void)activeAccountsChanged:(id)arg1;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (BOOL)allowsMultipleConnections;
- (int)buddyNotesMaxByteLength;
- (id)canonicalFormOfID:(id)arg1;
- (id)cardMap;
- (void)clearIDToCardMap;
- (int)compareNames:(id)arg1;
- (void)dealloc;
- (id)defaultAccountSettings;
- (id)defaultImageDataForID:(id)arg1;
- (void)defaultsChanged:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)doneSetup;
- (unsigned int)emailDomainOfID:(id)arg1;
- (id)emailDomains;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (BOOL)handlesChatInvites;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)initialSyncPerformed;
- (id)internalName;
- (BOOL)isEnabled;
- (BOOL)isPersistent;
- (BOOL)isPlugInService;
- (id)localizedName;
- (id)localizedShortName;
- (id)myScreenNames;
- (id)name;
- (id)newIDToCardMap;
- (id)normalizedFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)serviceDefaults;
- (id)serviceImageData;
- (id)serviceProperties;
- (void)setDefaultAccountSettings:(id)arg1;
- (void)setServiceDefaults:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (id)shortName;
- (unsigned int)status;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (id)subtypeInformationForAccount:(id)arg1;
- (BOOL)supportsAdding;
- (BOOL)supportsAuthorization;
- (BOOL)supportsIDNormalization;
- (BOOL)supportsRegistration;
- (void)updateIDToCardMapWithNotification:(id)arg1;

@end
