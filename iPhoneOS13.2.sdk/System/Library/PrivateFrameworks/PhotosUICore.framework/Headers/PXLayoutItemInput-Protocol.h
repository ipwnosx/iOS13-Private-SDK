//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PXLayoutItemInput <NSObject>
@property(readonly, nonatomic) CGRect acceptableCropRect;
@property(readonly, nonatomic) CGRect preferredCropRect;
@property(readonly, nonatomic) CGPoint positionOffset;
@property(readonly, nonatomic) CGAffineTransform transform;
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) CGSize size;
- (double)weightUsingCriterion:(long long)arg1;
@end

