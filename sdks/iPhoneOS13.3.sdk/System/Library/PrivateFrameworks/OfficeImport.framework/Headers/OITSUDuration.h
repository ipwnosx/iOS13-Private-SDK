//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OITSUDuration : NSObject <NSCopying>
{
    double mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)arg1;

@end
