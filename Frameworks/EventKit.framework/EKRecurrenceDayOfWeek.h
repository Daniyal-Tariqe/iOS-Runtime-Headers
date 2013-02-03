/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
    int _dayOfTheWeek;
    int _weekNumber;
}

@property(readonly) int dayOfTheWeek;
@property(readonly) int weekNumber;

+ (id)dayOfWeek:(int)arg1 weekNumber:(int)arg2;
+ (id)dayOfWeek:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dayOfTheWeek;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)iCalendarDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfTheWeek:(int)arg1 weekNumber:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)weekNumber;

@end
