/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPort : NSObject <NSCopying, NSCoding> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;

- (Class)classForCoder;
- (Class)classForPortCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (unsigned int)machPort;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (unsigned int)reservedSpaceLength;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;

@end
