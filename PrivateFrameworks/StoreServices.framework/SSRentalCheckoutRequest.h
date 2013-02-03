/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest {
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) NSNumber * rentalKeyIdentifier;
@property(readonly) NSArray * sinfs;

- (id)accountIdentifier;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithSinfs:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)rentalKeyIdentifier;
- (id)sinfs;

@end
