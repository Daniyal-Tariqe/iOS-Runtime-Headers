/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem {
    NSMutableSet *_privileges;
}

@property(retain) NSMutableSet * privileges;

- (void)addPrivilege:(id)arg1;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)privileges;
- (void)setPrivileges:(id)arg1;
- (void)write:(id)arg1;

@end
