//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray, NSNumber;

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate
{
    BOOL _highlighted;
    NSArray *_stackPoints;
    NSNumber *_goalLineYValue;
}

@property(readonly, nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSNumber *goalLineYValue; // @synthesize goalLineYValue=_goalLineYValue;
@property(copy, nonatomic) NSArray *stackPoints; // @synthesize stackPoints=_stackPoints;
// - (void).cxx_destruct;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithStackPoints:(id)arg1 goalLineYValue:(id)arg2 highlighted:(BOOL)arg3 userInfo:(id)arg4;

@end

