/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {
    NSMutableArray *_optionArray;
    NSString *_subcommandName;
}

+ (id)subcommandWithName:(id)arg1;

- (void)addOption:(id)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6;
- (void)addOptions;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (unsigned int)hash;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)optionArray;
- (int)run;
- (void)showHelp;
- (void)stop;
- (id)subcommandName;

@end
