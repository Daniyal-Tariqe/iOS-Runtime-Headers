/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSError, NSMutableArray, NSMapTable;

@interface _NSXMLParserInfo : NSObject {
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { 
            unsigned long maximum; 
            unsigned long length; 
            struct _xmlParserNodeInfo {} *buffer; 
        } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { 
            void *userData; 
            int (*error)(); 
            int (*warning)(); 
            struct _xmlNode {} *node; 
            int nodeNr; 
            int nodeMax; 
            struct _xmlNode {} **nodeTab; 
            unsigned int finishDtd; 
            struct _xmlDoc {} *doc; 
            int valid; 
            struct _xmlValidState {} *vstate; 
            int vstateNr; 
            int vstateMax; 
            struct _xmlValidState {} *vstateTab; 
            struct _xmlAutomata {} *am; 
            struct _xmlAutomataState {} *state; 
        } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long x34; long x35; int x36; int x37; int x38; char *x39; char *x40; char *x41; int *x42; int x43; int x44; int *x45; int x46; struct _xmlParserInput {} *x47; int x48; int x49; int x50; int x51; void *x52; int x53; int x54; void *x55; int x56; int x57; struct _xmlDict {} *x58; char **x59; int x60; int x61; char *x62; char *x63; char *x64; int x65; int x66; int x67; char **x68; int *x69; void **x70; struct _xmlHashTable {} *x71; struct _xmlHashTable {} *x72; int x73; int x74; int x75; int x76; struct _xmlNode {} *x77; int x78; struct _xmlAttr {} *x79; struct _xmlError { 
            int domain; 
            int code; 
            char *message; 
            int level; 
            char *file; 
            int line; 
            char *str1; 
            char *str2; 
            char *str3; 
            int int1; 
            int int2; 
            void *ctxt; 
            void *node; 
    BOOL delegateAborted;
    NSError *error;
    NSMutableArray *namespaces;
        } x80; int x81; unsigned long x82; unsigned long x83; } *parserContext;
    unsigned int parserFlags;
    struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); unsigned int x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); } *saxHandler;
    NSMapTable *slowStringMap;
}

@end
