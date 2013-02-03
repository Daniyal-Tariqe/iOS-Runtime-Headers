/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileManager : NSObject {
}

+ (BOOL)_storeMovePath:(id)arg1 toPath:(id)arg2;
+ (id)cacheDirectoryPathWithName:(id)arg1;
+ (id)defaultManager;
+ (BOOL)ensureDirectoryExists:(id)arg1;

- (id)URLForDirectory:(unsigned int)arg1 inDomain:(unsigned int)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id*)arg5;
- (id)URLsForDirectory:(unsigned int)arg1 inDomains:(unsigned int)arg2;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3;
- (id)_displayPathForPath:(id)arg1;
- (id)_info;
- (BOOL)_isPathOnMissingVolume:(id)arg1;
- (BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(BOOL)arg5;
- (void)_performRemoveFileAtPath:(id)arg1;
- (BOOL)_replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned int)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(BOOL*)arg2 traverseLink:(BOOL)arg3;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (BOOL)_web_removeFileOnlyAtPath:(id)arg1;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)changeCurrentDirectoryPath:(id)arg1;
- (BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)delegate;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)directoryCanBeCreatedAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(int)arg3 keepExtension:(BOOL)arg4 error:(id*)arg5;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(int)arg3 keepExtension:(BOOL)arg4;
- (id)directoryContentsAtPath:(id)arg1;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (id)displayNameAtPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 errorHandler:(id)arg4;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2 withPath:(id)arg3;
- (BOOL)isDeletableFileAtPath:(id)arg1;
- (BOOL)isExecutableFileAtPath:(id)arg1;
- (BOOL)isReadableFileAtPath:(id)arg1;
- (BOOL)isWritableFileAtPath:(id)arg1;
- (BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned long)arg2;
- (id)makeUniqueDirectoryWithPath:(id)arg1;
- (id)makeUniqueDirectoryWithPath:(id)arg1;
- (BOOL)mf_canWriteToDirectoryAtPath:(id)arg1;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id*)arg3;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned int)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (id)pathsAtDirectory:(id)arg1 withNameFamily:(id)arg2;
- (id)pathsAtDirectory:(id)arg1 withNameFamily:(id)arg2;
- (unsigned long)readXattrBytes:(void*)arg1 count:(unsigned long)arg2 withName:(id)arg3 path:(id)arg4;
- (BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)removeItemsAtPaths:(id)arg1;
- (BOOL)removeItemsAtPaths:(id)arg1;
- (void)removeXattrNamed:(id)arg1 path:(id)arg2;
- (BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned int)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned int)arg2;
- (id)subpathsAtPath:(id)arg1;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)tmpFileForVideoTranscode;
- (id)tmpFileForVideoTranscode;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (void)writeXattrBytes:(void*)arg1 count:(unsigned long)arg2 withName:(id)arg3 path:(id)arg4;

@end
