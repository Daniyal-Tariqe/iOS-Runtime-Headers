/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WBOfficeArt : NSObject {
}

+ (void)readFrom:(id)arg1 at:(long)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3 paragraph:(id)arg4 to:(id)arg5;
+ (void)setShapeAddress:(const struct WrdFileShapeAddress { int (**x1)(); int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; boolx12; boolx13; boolx14; int x15; }*)arg1 to:(id)arg2;

@end
