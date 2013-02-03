/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskDelegate>, NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
    NSString *_newETag;
}

@property <CoreDAVTaskDelegate> * delegate;
@property(retain) NSString * newETag;

- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)newETag;
- (void)setNewETag:(id)arg1;

@end
