/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VMUCallTreeNode, NSString, NSArray;

@interface VMUCallTreeNode : NSObject {
    union { 
        NSString *thePseudoName; 
        VMUCallTreeNode *theChild; 
        VMUCallTreeNode **theChildren; 
    unsigned int address;
    unsigned int count;
    unsigned int flags;
    NSString *name;
    unsigned int numBytes;
    VMUCallTreeNode *parent;
    NSArray *sortedChildrenWithPseudoNode;
    } un;
}

+ (void)compareChildrenOf:(id)arg1 toChildrenOf:(id)arg2 storeDiffIn:(id)arg3;
+ (id)makeFakeRootForNode:(id)arg1;
+ (id)rootForCompare:(id)arg1 to:(id)arg2;
+ (id)rootForSampleFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2 sampler:(id)arg3 options:(unsigned int)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
+ (id)rootForTraceData:(id)arg1;

- (void)addStackEntry:(id)arg1 symbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2 sampler:(id)arg3 numBytes:(unsigned int)arg4 options:(unsigned int)arg5 uniqueStrings:(id)arg6 addressToSymbolNameMap:(id)arg7 threadPortToNameMap:(id)arg8 dispatchQueueSerialNumToNameMap:(id)arg9;
- (char *)addSubTreeFromFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withIndent:(int)arg2 withLine:(char *)arg3 withLen:(unsigned int*)arg4;
- (void)addTraceEvent:(id)arg1 forTraceData:(id)arg2;
- (unsigned int)address;
- (id)browserName;
- (int)compare:(id)arg1;
- (int)compareNames:(id)arg1;
- (int)comparePuttingMainThreadFirst:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutWaiting;
- (id)findNodeMatching:(id)arg1 searchForward:(BOOL)arg2 ignoreCase:(BOOL)arg3 wholeWords:(BOOL)arg4;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned int)arg2 compareSymbolNames:(BOOL)arg3;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned int)arg2;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)invertedNode;
- (BOOL)isPseudo;
- (id)largestTopOfStackPath;
- (id)name;
- (id)nextNode;
- (unsigned int)numBytes;
- (id)parent;
- (id)prevNode;
- (id)prune:(unsigned int)arg1;
- (id)pseudoName;
- (id)pseudoNodeTopOfStackChild;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setNameToCount:(id)arg1;
- (id)sortedChildrenByNameWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)sortedChildrenWithPseudoNode;
- (unsigned int)sumOfChildrenCounts;

@end
