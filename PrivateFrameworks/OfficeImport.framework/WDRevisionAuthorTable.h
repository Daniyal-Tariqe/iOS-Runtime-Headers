/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDDocument;

@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (void)addAuthor:(id)arg1;
- (int)authorAddLookup:(id)arg1;
- (id)authorAt:(int)arg1;
- (int)authorCount;
- (id)authors;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end
