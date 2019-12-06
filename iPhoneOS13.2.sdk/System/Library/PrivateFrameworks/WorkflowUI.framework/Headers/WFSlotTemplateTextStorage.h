//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSMutableSet, NSParagraphStyle, NSSet, UIColor, UIFont;

@interface WFSlotTemplateTextStorage : NSTextStorage
{
    BOOL _enabled;
    UIFont *_font;
    UIFont *_unpopulatedFont;
    UIColor *_textColor;
    UIColor *_tintColor;
    NSParagraphStyle *_paragraphStyle;
    UIColor *_disabledSlotTitleColor;
    UIColor *_disabledSlotBackgroundColor;
    NSArray *_contents;
    long long _contentsTextAlignment;
    NSTextStorage *_textStorage;
    NSMutableSet *_mutableHighlightedSlots;
    NSMutableSet *_mutableSelectedSlots;
    NSMutableSet *_mutableTypingSlots;
    NSUInteger _editingLevel;
}

@property(nonatomic) NSUInteger editingLevel; // @synthesize editingLevel=_editingLevel;
@property(readonly, nonatomic) NSMutableSet *mutableTypingSlots; // @synthesize mutableTypingSlots=_mutableTypingSlots;
@property(readonly, nonatomic) NSMutableSet *mutableSelectedSlots; // @synthesize mutableSelectedSlots=_mutableSelectedSlots;
@property(readonly, nonatomic) NSMutableSet *mutableHighlightedSlots; // @synthesize mutableHighlightedSlots=_mutableHighlightedSlots;
@property(readonly, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(readonly, nonatomic) long long contentsTextAlignment; // @synthesize contentsTextAlignment=_contentsTextAlignment;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (void)enumerateContentInRange:(NSRange *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)slotAtCharacterIndex:(NSUInteger)arg1 effectiveRange:(NSRange * )arg2 effectiveContentRange:(NSRange * )arg3;
- (NSRange *)characterRangeForSlot:(id)arg1 includingInsideSpacingOpportunities:(BOOL)arg2;
- (NSUInteger)slotSpacingOpportunityAtCharacterIndex:(NSUInteger)arg1;
- (id)stringForSlotSpacingOpportunity:(NSUInteger)arg1;
- (void)_updateColorsForSlot:(id)arg1 inRange:(NSRange *)arg2;
- (void)updateColorsForAllSlots;
- (void)updateColorsForSlot:(id)arg1;
- (void)getColorsForSlot:(id)arg1 titleColor:(out id )arg2 backgroundColor:(out id )arg3;
- (id)attributedStringForSlot:(id)arg1;
- (void)replaceAttributeInInanimateText:(id)arg1 value:(id)arg2;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 range:(NSRange *)arg3;
- (void)regenerateEntireAttributedString;
- (void)didEndTypingInSlot:(id)arg1;
- (void)didBeginTypingInSlot:(id)arg1;
@property(readonly, nonatomic) NSSet *typingSlots;
- (void)didDeselectSlot:(id)arg1;
- (void)didSelectSlot:(id)arg1;
@property(readonly, nonatomic) NSSet *selectedSlots;
- (void)didUnhighlightSlot:(id)arg1;
- (void)didHighlightSlot:(id)arg1;
@property(readonly, nonatomic) NSSet *highlightedSlots;
- (void)setDisabledSlotTitleColor:(id)arg1 backgroundColor:(id)arg2;
@property(readonly, nonatomic) UIColor *disabledSlotBackgroundColor; // @synthesize disabledSlotBackgroundColor=_disabledSlotBackgroundColor;
@property(readonly, nonatomic) UIColor *disabledSlotTitleColor; // @synthesize disabledSlotTitleColor=_disabledSlotTitleColor;
@property(copy, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *unpopulatedFont; // @synthesize unpopulatedFont=_unpopulatedFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)endEditing;
- (void)beginEditing;
- (void)setAttributes:(id)arg1 range:(NSRange *)arg2;
- (void)replaceCharactersInRange:(NSRange *)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(NSUInteger)arg1 effectiveRange:(NSRange * )arg2;
- (id)string;
- (id)init;

@end

