//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEvent : NSObject
{
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (double)velocityRelativeToPreviousEvent:(id)arg1;
- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1;

@end

