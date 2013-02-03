/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject {
}

@property(retain) NoteAccountObject * account;
@property(retain) NSSet * changes;
@property(retain) NSString * externalIdentifier;
@property(retain) NSString * name;
@property(retain) NSString * syncAnchor;

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (unsigned int)maximumServerIntId;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)predicateForNotes;

@end
