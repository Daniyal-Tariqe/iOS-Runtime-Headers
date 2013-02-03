/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableRowProperties, WDTable;

@interface WDTableRow : NSObject {
    NSMutableArray *mCells;
    int mIndex;
    WDTableRowProperties *mProperties;
    WDTable *mTable;
}

- (id)addCell;
- (id)addCellWithIndex:(int)arg1;
- (id)cellAt:(int)arg1;
- (int)cellCount;
- (id)cellIterator;
- (void)dealloc;
- (int)index;
- (id)initWithTable:(id)arg1 at:(int)arg2;
- (id)newCellIterator;
- (id)properties;
- (id)table;

@end
