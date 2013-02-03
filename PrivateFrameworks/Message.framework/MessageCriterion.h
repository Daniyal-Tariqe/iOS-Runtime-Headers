/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface MessageCriterion : NSObject {
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    NSArray *_criteria;
    NSString *_criterionIdentifier;
    int _dateUnitType;
    NSString *_expression;
    NSString *_name;
    int _qualifier;
    NSArray *_requiredHeaders;
    int _type;
    NSString *_uniqueId;
}

+ (void)_updateAddressComments:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criterionForMailboxURL:(id)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)messageIsServerSearchResultCriterion:(BOOL)arg1;
+ (id)stringForCriterionType:(int)arg1;

- (id)SQLExpressionWithContext:(struct { unsigned int x1; unsigned int x2; BOOL x3; BOOL x4; }*)arg1 depth:(unsigned int)arg2;
- (id)SQLExpressionWithTables:(unsigned int*)arg1 baseTable:(unsigned int)arg2;
- (id)_criterionForSQL;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (id)_qualifierString;
- (BOOL)allCriteriaMustBeSatisfied;
- (unsigned int)bestBaseTable;
- (id)criteria;
- (id)criterionByAddingEmailCriteria;
- (id)criterionByExpandingAddressCriteria;
- (id)criterionForSQL;
- (id)criterionIdentifier;
- (int)criterionType;
- (BOOL)dateIsRelative;
- (int)dateUnits;
- (void)dealloc;
- (id)description;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (id)emailAddressesForGroupCriterion;
- (id)expression;
- (id)fixOnce;
- (BOOL)hasNumberCriterion;
- (BOOL)includesCriterionSatisfyingPredicate:(int (*)())arg1 restrictive:(BOOL)arg2;
- (id)init;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)name;
- (int)qualifier;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)setCriteria:(id)arg1;
- (void)setCriterionIdentifier:(id)arg1;
- (void)setCriterionType:(int)arg1;
- (void)setDateIsRelative:(BOOL)arg1;
- (void)setDateUnits:(int)arg1;
- (void)setExpression:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualifier:(int)arg1;
- (id)simplifiedCriterion;
- (id)simplifyOnce;
- (id)stringForMessageRuleQualifier:(int)arg1;

@end
