//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVelocityIntegratorDataSample : NSObject
{
    double _timestamp;
    CGVector _translation;
    CGPoint _point;
}

@property(nonatomic) CGPoint point; // @synthesize point=_point;
@property(nonatomic) CGVector translation; // @synthesize translation=_translation;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)updateTimeToNow;
- (BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 minimumRequiredMovement:(double)arg2;
- (id)description;

@end

