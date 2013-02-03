/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources, CHDDataValuesCollection, CHDFormula;

@interface CHDData : NSObject {
    unsigned int mContentFormatId;
    unsigned int mDataValueIndexCount;
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(unsigned int)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;

- (unsigned int)averageDataPointDecimalCount;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (unsigned int)countOfCellsBeingReferenced;
- (unsigned int)dataValueIndexCount;
- (id)dataValues;
- (void)dealloc;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;
- (id)formula;
- (id)initWithDataPointCount:(unsigned int)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (bool)isEmpty;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (void)setDataValueIndexCount:(unsigned int)arg1;
- (void)setFormula:(id)arg1 chart:(id)arg2;

@end
