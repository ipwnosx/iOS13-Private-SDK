//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait
{
    double _minimumAestheticScore;
}

@property(nonatomic) double minimumAestheticScore; // @synthesize minimumAestheticScore=_minimumAestheticScore;
- (BOOL)isActive;
- (id)initWithMinimumContentScore:(double)arg1 minimumAestheticScore:(double)arg2;

@end

