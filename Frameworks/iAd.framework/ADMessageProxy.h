/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSArray, NSMutableDictionary, <ADMessageProxyDelegate>;

@interface ADMessageProxy : NSObject {
    <ADMessageProxyDelegate> *_delegate;
    Class _itemClass;
    NSMutableDictionary *_proxyItems;
}

@property <ADMessageProxyDelegate> * delegate;
@property(readonly) NSArray * itemArrayCopy;
@property Class itemClass;
@property(readonly) int itemCount;
@property(retain) NSMutableDictionary * proxyItems;

- (void)addItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)itemArrayCopy;
- (Class)itemClass;
- (int)itemCount;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxyItems;
- (void)removeItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemClass:(Class)arg1;
- (void)setProxyItems:(id)arg1;

@end
