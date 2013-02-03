/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {
    NSRLEArray *attributes;
    NSString *string;
}

- (id)_runArrayHoldingAttributes;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (unsigned int)length;
- (id)string;

@end
