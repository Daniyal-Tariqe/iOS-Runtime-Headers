/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKCoreTextRenderer, NSAttributedString;

@interface GKLabel : UILabel {
    NSAttributedString *_attributedString;
    NSAttributedString *_attributedText;
    GKCoreTextRenderer *_coreTextRenderer;
    BOOL _forceNaturalAlignment;
    float _leading;
    BOOL _shouldDrawEmoji;
    BOOL _shouldQuoteText;
    BOOL _shouldSizeToTextImageBounds;
}

@property(readonly) NSAttributedString * attributedString;
@property(copy) NSAttributedString * attributedText;
@property(readonly) float baselineYOffset;
@property(retain) id contentPath;
@property(retain) GKCoreTextRenderer * coreTextRenderer;
@property BOOL forceNaturalAlignment;
@property float leading;
@property BOOL shouldDrawEmoji;
@property BOOL shouldQuoteText;
@property BOOL shouldSizeToTextImageBounds;
@property(copy) NSString * truncationSymbol;

+ (void)_initializeSafeCategory;

- (id)attributedString;
- (id)attributedStringForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)attributedText;
- (float)baselineYOffset;
- (id)contentPath;
- (id)coreTextRenderer;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)forceNaturalAlignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateAttributedString;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (float)leading;
- (struct __CTParagraphStyle { }*)paragraphStyleWithLineHeight:(float)arg1;
- (float)preferredHeightForWidth:(float)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentPath:(id)arg1;
- (void)setCoreTextRenderer:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setForceNaturalAlignment:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLeading:(float)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShouldDrawEmoji:(BOOL)arg1;
- (void)setShouldQuoteText:(BOOL)arg1;
- (void)setShouldSizeToTextImageBounds:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTruncationSymbol:(id)arg1;
- (BOOL)shouldDrawEmoji;
- (BOOL)shouldQuoteText;
- (BOOL)shouldSizeToTextImageBounds;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 calculatedFontSize:(float*)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (id)truncationSymbol;

@end
