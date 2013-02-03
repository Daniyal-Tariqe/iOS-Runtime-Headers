/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewContentDelegate>, <EKDayViewContentDataSource>, NSDate, NSMutableArray, EKDayGridView;

@interface EKDayViewContent : UIView {
    unsigned int _loadingOccurrences : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _putSelectionOnTop : 1;
    unsigned int _showsGrid : 1;
    unsigned int _darkensSelection : 1;
    unsigned int _eventsFillGrid : 1;
    unsigned int _dimsNonSelectedItems : 1;
    <EKDayViewContentDataSource> *_dataSource;
    double _dayEndGMTOffset;
    double _dayStart;
    double _dayStartGMTOffset;
    NSMutableArray *_dayStarts;
    unsigned int _daysToDisplay;
    <EKDayViewContentDelegate> *_delegate;
    EKDayGridView *_grid;
    NSMutableArray *_itemsByDay;
    NSDate *_selectedDate;
    unsigned int _selectedEventIndex;
}

@property BOOL allowsOccurrenceSelection;
@property BOOL darkensSelection;
@property <EKDayViewContentDataSource> * dataSource;
@property <EKDayViewContentDelegate> * delegate;
@property BOOL dimsNonSelectedItems;
@property BOOL eventsFillGrid;
@property(readonly) double firstEventSecond;
@property BOOL showsGrid;
@property BOOL showsLeftBorder;

+ (void)_initializeSafeCategory;

- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForEventAtIndex:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForEventWithStartDate:(id)arg1 duration:(double)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForOccurrence:(id)arg1;
- (float)_dayWidth;
- (void)_layoutContentItems:(id)arg1 forDayStart:(id)arg2 xPosition:(float)arg3 width:(float)arg4;
- (double)_offsetTimeForDST:(double)arg1 timeZone:(struct __CFTimeZone { }*)arg2 dayStartTimeZone:(id)arg3;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (BOOL)allowsOccurrenceSelection;
- (BOOL)darkensSelection;
- (id)dataSource;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dayOccurrenceViewDragExited:(id)arg1;
- (void)dayOccurrenceViewStartTouch:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (BOOL)dimsNonSelectedItems;
- (BOOL)eventIndexExists:(unsigned int)arg1;
- (unsigned int)eventIndexForView:(id)arg1;
- (BOOL)eventsFillGrid;
- (BOOL)eventsIntersectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)firstEventSecond;
- (id)getAllOccurrenceViews;
- (id)grid;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 numberOfDaysToDisplay:(unsigned int)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 opaque:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)occurrenceViewForEventOccurrence:(id)arg1 onDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2;
- (id)occurrenceViewForOccurrence:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointForDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)reloadData;
- (void)removeAllOccurrenceViews;
- (void)selectItemWithEventIndex:(unsigned int)arg1;
- (unsigned int)selectedEventIndex;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDarkensSelection:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setShowsGrid:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEventIndex:(unsigned int)arg2;
- (BOOL)showsGrid;
- (BOOL)showsLeftBorder;
- (id)startDateForEventIndex:(unsigned int)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)viewForEventIndex:(unsigned int)arg1;

@end
