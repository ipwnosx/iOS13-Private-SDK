//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUILabel, TLKStackView;

@interface SearchUICompactCardSectionView : SearchUICardSectionView
{
    TLKStackView *_stackView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_subtitleLabel;
}

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
@property(retain, nonatomic) SearchUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
// - (void).cxx_destruct;
- (void)updateWithRowModel:(id)arg1;
- (id)richTextForSearchUIText:(id)arg1 withMaxLines:(NSUInteger)arg2;
- (id)setupContentView;

@end

