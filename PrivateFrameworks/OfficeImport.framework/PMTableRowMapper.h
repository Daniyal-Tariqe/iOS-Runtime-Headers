/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTable, OADTableRow;

@interface PMTableRowMapper : CMMapper {
    OADTableRow *mRow;
    unsigned int mRowIndex;
    OADTable *mTable;
}

- (unsigned int)cellCount;
- (float)height;
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned int)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
