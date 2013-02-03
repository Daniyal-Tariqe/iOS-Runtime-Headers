/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMessageMoveRequest : NSObject {
    id _context;
    NSString *_fromFolder;
    NSString *_message;
    NSString *_toFolder;
}

@property(retain) id context;
@property(readonly) NSString * fromFolder;
@property(readonly) NSString * message;
@property(readonly) NSString * toFolder;

- (id)context;
- (void)dealloc;
- (id)fromFolder;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;
- (id)message;
- (void)setContext:(id)arg1;
- (id)toFolder;

@end
