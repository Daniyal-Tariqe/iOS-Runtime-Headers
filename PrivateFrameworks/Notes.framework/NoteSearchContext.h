/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NoteContext, NSMutableArray;

@interface NoteSearchContext : NSObject {
    NSMutableArray *integerIds;
    NoteContext *noteContext;
    struct __CXQuery { } *query;
}

@property(readonly) struct __CXQuery { }* query;

- (void)dealloc;
- (id)initWithSearchTerms:(id)arg1 context:(id)arg2;
- (BOOL)nextSearchResults:(id*)arg1 includePrevious:(BOOL)arg2;
- (struct __CXQuery { }*)query;

@end
