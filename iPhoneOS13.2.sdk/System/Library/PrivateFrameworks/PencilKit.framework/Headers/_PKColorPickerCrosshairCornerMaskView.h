//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface _PKColorPickerCrosshairCornerMaskView : UIView
{
    BOOL _excludeCorner;
    NSUInteger _cornerPosition;
}

+ (Class)layerClass;
@property(nonatomic) BOOL excludeCorner; // @synthesize excludeCorner=_excludeCorner;
@property(nonatomic) NSUInteger cornerPosition; // @synthesize cornerPosition=_cornerPosition;
- (id)maskPath;
- (id)_shapeLayer;
- (void)_setFillColor:(id)arg1;
- (void)_setPath:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

