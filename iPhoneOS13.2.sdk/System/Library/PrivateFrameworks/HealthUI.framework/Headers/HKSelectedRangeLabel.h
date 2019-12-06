//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HKSelectedRangeLabel : UILabel
{
    UIEdgeInsets _padding;
}

+ (id)_prefixColorForSelectedRangeData:(id)arg1 defaultColor:(id)arg2;
+ (id)_stringForSelectedRangeData:(id)arg1;
+ (id)attributedStringForSelectedRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3 prefersImageAffixes:(BOOL)arg4;
+ (void)clearCaches;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelectedRangeData:(id)arg1;
- (CGSize)intrinsicContentSize;
- (void)drawTextInRect:(CGRect)arg1;
- (id)init;

@end

