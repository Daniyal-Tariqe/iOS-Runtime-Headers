/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGroupInsertionItem : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    int _index;
    } _range;
}

- (int)groupIndex;
- (id)initWithExistingGroup:(int)arg1 andRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithNewGroupBeforeGroup:(int)arg1 andRowCount:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
