/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSMutableData, NSMutableArray, DAVXMLNode;

@interface DAVXMLTree : NSObject {
    NSMutableData *contentData;
    DAVXMLNode *root;
    NSMutableArray *stack;
}

+ (id)treeWithXMLData:(id)arg1;

- (void)_data:(const char *)arg1 len:(int)arg2;
- (void)_endelement:(const char *)arg1;
- (void)_startelement:(const char *)arg1 attributes:(const char **)arg2;
- (void)dealloc;
- (id)initWithXMLData:(id)arg1;
- (id)root;

@end
