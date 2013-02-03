/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@interface AYIPV4Address : AYAddress {
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    } _saddr;
}

- (id)URLToAddressWithScheme:(id)arg1 andPort:(int)arg2 URI:(id)arg3;
- (unsigned int)_s_addr;
- (id)addressAsData;
- (id)addressAsString;
- (void)dumpInternal;
- (void)getAddressAsSockAddr:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 length:(int*)arg2;
- (id)initWithSockaddrBuffer:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (BOOL)isLocalAddressConnectingTo:(id)arg1;
- (int)port;
- (id)type;

@end
