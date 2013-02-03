/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUDataConsumer>;

@interface SUFilteringDataConsumer : NSObject <SUDataConsumer> {
    <SUDataConsumer> *_consumer;
}

@property(retain) <SUDataConsumer> * dataConsumer;

+ (int)maxConsumeLengthForReadLength:(int)arg1;
+ (long long)outputLengthForInputLength:(long long)arg1;

- (int)consumeData:(id)arg1;
- (id)dataConsumer;
- (void)dealloc;
- (void)finish;
- (id)init;
- (id)initWithDataConsumer:(id)arg1;
- (unsigned int)minimumConsumeLength;
- (void)setDataConsumer:(id)arg1;

@end
