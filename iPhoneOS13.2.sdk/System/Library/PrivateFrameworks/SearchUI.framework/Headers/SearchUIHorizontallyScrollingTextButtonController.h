//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIHorizontallyScrollingButtonController.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@interface SearchUIHorizontallyScrollingTextButtonController : SearchUIHorizontallyScrollingButtonController <NUIContainerViewDelegate>
{
}

- (CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)setCardSectionRowModel:(id)arg1;
- (BOOL)scrollsWithoutStoppingAtBoundaries;
- (BOOL)wantsSeparators;
- (id)init;

@end

