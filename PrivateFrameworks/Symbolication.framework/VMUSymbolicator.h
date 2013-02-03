/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUMachTaskContainer, NSArray, NSString, NSMutableArray;

@interface VMUSymbolicator : NSObject {
    BOOL _isProtected;
    VMUMachTaskContainer *_machTaskContainer;
    NSString *_path;
    NSArray *_symbolOwnerAddressRanges;
    NSMutableArray *_symbolOwners;
}

+ (id)convertHeaderToSymbolOwner:(id)arg1 allowLazySymbolOwners:(BOOL)arg2;
+ (void)ignoreFunctionSymbols:(BOOL)arg1;
+ (BOOL)isIgnoreFunctionSymbols;
+ (id)symbolicatorForMachTaskContainer:(id)arg1;
+ (id)symbolicatorForPath:(id)arg1 architecture:(id)arg2;
+ (id)symbolicatorForPid:(int)arg1;
+ (id)symbolicatorForSignature:(id)arg1 dsymSearchPaths:(id)arg2 useMds:(BOOL)arg3;
+ (id)symbolicatorForSignature:(id)arg1;
+ (id)symbolicatorForTask:(unsigned int)arg1;
+ (id)symbolicatorWithHeaders:(id)arg1 allowLazySymbolOwners:(BOOL)arg2 path:(id)arg3 machTaskContainer:(id)arg4;
+ (id)symbolicatorWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3;
+ (id)symbolicatorsForPath:(id)arg1;

- (BOOL)addSymbolRichFile:(id)arg1;
- (id)architecture;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)faultLazySymbolOwnerAtIndex:(int)arg1;
- (void)forceFullSymbolExtraction;
- (id)initWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3;
- (BOOL)isProtected;
- (id)path;
- (int)pid;
- (id)programTextForAddress:(unsigned long long)arg1;
- (id)programTextForAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regions;
- (id)regionsForName:(id)arg1;
- (id)regionsInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceSymbolOwner:(id)arg1 withSymbolOwner:(id)arg2;
- (id)signature;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)sourceInfos;
- (id)sourceInfosInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)symbolOwnerForAddress:(unsigned long long)arg1;
- (id)symbolOwnerForName:(id)arg1;
- (id)symbolOwnerForPath:(id)arg1;
- (id)symbolOwners;
- (id)symbolOwnersForName:(id)arg1;
- (id)symbolOwnersInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)symbolOwnersWithFlags:(unsigned int)arg1;
- (id)symbols;
- (id)symbolsForMangledName:(id)arg1;
- (id)symbolsForName:(id)arg1;
- (id)symbolsInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;

@end
