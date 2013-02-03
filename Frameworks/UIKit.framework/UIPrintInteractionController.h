/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIPrintFormatter, PKPrinter, <UIPrintInteractionControllerDelegate>, UIPrintPageRenderer, UIPrintInfo, UIPrintPaper, NSArray;

@interface UIPrintInteractionController : NSObject {
    unsigned int _backgroundTaskIdentifier;
    id _completionHandler;
    <UIPrintInteractionControllerDelegate> *_delegate;
    UIPrintFormatter *_printFormatter;
    UIPrintInfo *_printInfo;
    UIPrintPageRenderer *_printPageRenderer;
    UIPrintPaper *_printPaper;
    id _printState;
    id _printingItem;
    NSArray *_printingItems;
    BOOL _showsPageRange;
}

@property <UIPrintInteractionControllerDelegate> * delegate;
@property(readonly) int pageCount;
@property struct _NSRange { unsigned int location; unsigned int length; } pageRange;
@property(retain) UIPrintFormatter * printFormatter;
@property(retain) UIPrintInfo * printInfo;
@property(retain) UIPrintPageRenderer * printPageRenderer;
@property(readonly) UIPrintPaper * printPaper;
@property(retain) PKPrinter * printer;
@property(copy) id printingItem;
@property(copy) NSArray * printingItems;
@property BOOL showsPageRange;

+ (BOOL)canPrintData:(id)arg1;
+ (BOOL)canPrintURL:(id)arg1;
+ (BOOL)isPrintingAvailable;
+ (id)printableUTIs;
+ (id)sharedPrintController;

- (BOOL)_canShowDuplex;
- (BOOL)_canShowPageRange;
- (void)_cleanPrintState;
- (id)_currentPrintInfo;
- (void)_endPrintJob:(BOOL)arg1 error:(id)arg2;
- (id)_init;
- (void)_preparePrintInfo;
- (id)_printItem:(id)arg1;
- (void)_printPage;
- (id)_printPageRenderer:(id)arg1;
- (void)_printPanelDidDismiss;
- (void)_printPanelDidPresent;
- (void)_printPanelWillDismiss:(BOOL)arg1;
- (void)_setPrintInfoState:(int)arg1;
- (BOOL)_setupPrintPanel:(id)arg1;
- (void)_startPrinting;
- (void)_updatePageCount;
- (void)_updatePrintPaper;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(BOOL)arg1;
- (id)init;
- (int)pageCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRange;
- (BOOL)presentAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3;
- (BOOL)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4;
- (id)printFormatter;
- (id)printInfo;
- (id)printPageRenderer;
- (id)printPaper;
- (id)printer;
- (id)printingItem;
- (id)printingItems;
- (void)release;
- (void)setDelegate:(id)arg1;
- (void)setPageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPrintFormatter:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintPageRenderer:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setPrintingItem:(id)arg1;
- (void)setPrintingItems:(id)arg1;
- (void)setShowsPageRange:(BOOL)arg1;
- (BOOL)showsPageRange;

@end
