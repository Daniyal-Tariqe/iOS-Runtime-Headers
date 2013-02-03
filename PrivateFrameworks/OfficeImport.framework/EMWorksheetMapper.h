/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECColumnWidthConvertor, EDWorksheet, CMStyle;

@interface EMWorksheetMapper : EMSheetMapper {
    EDWorksheet *edWorksheet;
    double *mColumnGrid;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    int mHeight;
    unsigned int mMaxPopulatedColumn;
    unsigned int mMaxPopulatedRow;
    double *mRowGrid;
    CMStyle *mStyle;
    int mWidth;
}

- (void)_initWithState:(id)arg1;
- (int)columnCount;
- (double*)columnGrid;
- (id)columnWidthConvertor;
- (void)countRowsAndColumnsWithState:(id)arg1;
- (void)dealloc;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (int)height;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (BOOL)isVisible;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapGridAt:(id)arg1;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapTableStyleAt:(id)arg1 withState:(id)arg2;
- (int)maxRowNumber;
- (int)preprocessHeightWithState:(id)arg1;
- (struct CGSize { float x1; float x2; })preprocessSizeWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (double*)rowGrid;
- (void)setRowGrid;
- (int)width;
- (double)xlColumnWidthToPoints:(double)arg1;

@end
