//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionViewCell.h>

@class UILabel;

@interface GKStatusCell : GKCollectionViewCell
{
    UILabel *_statusLabel;
}

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)prepareForReuse;
- (BOOL)canRemoveItem;
- (void)setStatus:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

