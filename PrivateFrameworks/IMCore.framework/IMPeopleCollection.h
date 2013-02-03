/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray, NSArray;

@interface IMPeopleCollection : IMPeople {
    NSMutableArray *_collectedPeople;
}

@property(readonly) NSArray * collectedIMPeople;

- (void)_collectionNotification:(id)arg1;
- (void)addIMPeople:(id)arg1;
- (id)collectedIMPeople;
- (BOOL)collectsIMPeople:(id)arg1;
- (BOOL)containsPerson:(id)arg1;
- (void)dealloc;
- (id)groups;
- (id)init;
- (id)people;
- (void)removeIMPeople:(id)arg1;

@end
