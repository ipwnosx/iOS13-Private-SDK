//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTStickerRecentsStickerCollectionViewCell.h>

@class CAShapeLayer;

@interface AVTStickerRecentsButtonCollectionViewCell : AVTStickerRecentsStickerCollectionViewCell
{
    CAShapeLayer *_circularBackgroundLayer;
}

+ (id)identifier;
@property(retain, nonatomic) CAShapeLayer *circularBackgroundLayer; // @synthesize circularBackgroundLayer=_circularBackgroundLayer;
// - (void).cxx_destruct;
- (void)updateWithDefaultImage;
- (void)updateWithImage:(id)arg1;
- (CGRect)circleLayerRect;
- (void)layoutSubviews;
- (CGRect)contentBounds;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

