//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPUStackItemView, MPUStackView;

@protocol MPUStackViewDataSource <NSObject>
- (void)stackView:(MPUStackView *)arg1 didCreateItem:(MPUStackItemView *)arg2;
- (void)stackView:(MPUStackView *)arg1 applyAttributesToItem:(MPUStackItemView *)arg2 atIndex:(long long)arg3;
- (long long)numberOfItemsInStackView:(MPUStackView *)arg1;
@end

