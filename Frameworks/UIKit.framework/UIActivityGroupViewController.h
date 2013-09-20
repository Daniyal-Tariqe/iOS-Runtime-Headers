/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary;

@interface UIActivityGroupViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    NSArray *_activities;
    int _activityCategory;
    NSDictionary *_customActivityTitles;
    BOOL _darkStyleOnLegacyApp;
    BOOL _hasActivities;
}

@property(copy) NSArray * activities;
@property int activityCategory;
@property(copy) NSDictionary * customActivityTitles;
@property BOOL darkStyleOnLegacyApp;
@property BOOL hasActivities;

- (id)activities;
- (int)activityCategory;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)customActivityTitles;
- (BOOL)darkStyleOnLegacyApp;
- (void)dealloc;
- (BOOL)hasActivities;
- (id)initWithActivityCategory:(int)arg1 title:(id)arg2;
- (void)setActivities:(id)arg1;
- (void)setActivityCategory:(int)arg1;
- (void)setCustomActivityTitles:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setHasActivities:(BOOL)arg1;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end