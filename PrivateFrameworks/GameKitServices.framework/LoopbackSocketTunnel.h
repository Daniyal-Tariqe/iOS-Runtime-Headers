/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSObject, NSObject<LoopbackSocketTunnelDelegate>;

@interface LoopbackSocketTunnel : NSObject {
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    NSObject<LoopbackSocketTunnelDelegate> *delegate;
    BOOL foundVTPIP;
    NSObject *optionalArg;
    unsigned short port;
    } sa;
    int sockFD;
    } vtpSA;
}

@property NSObject * optionalArg;

- (void)getIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (void)getVTPIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (id)optionalArg;
- (int)sendPacketToVTP:(id)arg1;
- (int)serverLoopProc:(id)arg1;
- (void)setOptionalArg:(id)arg1;
- (void)setVTPIP:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (void)shutdownSocket;

@end
