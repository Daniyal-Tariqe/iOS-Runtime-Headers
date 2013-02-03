/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSArray;

@interface ISSoftwareMap : NSObject {
    NSMutableArray *_applications;
}

@property(readonly) NSArray * applications;

+ (void)_startWatchingInstallationNotifications;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)currentMap;
+ (BOOL)currentMapIsValid;
+ (BOOL)haveApplicationsOfType:(struct __CFString { }*)arg1;
+ (void)invalidateCurrentMap;
+ (id)loadedMap;
+ (void)setCurrentMap:(id)arg1;
+ (void)startObservingNotifications;

- (void)_loadFromMobileInstallation;
- (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
- (id)_softwareUpdatesAccountsStringForApplications:(id)arg1;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)applications;
- (id)copySoftwareUpdatesPropertyList;
- (void)dealloc;
- (id)init;

@end
