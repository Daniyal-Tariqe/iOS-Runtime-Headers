/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, EKParticipant;

@interface EKEventAttendeesEditItem : EKEventEditItem {
    NSString *_searchAccountID;
    EKParticipant *_selfOrganizer;
}

- (id)attendeesWithoutSelfOrganizer;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;

@end
