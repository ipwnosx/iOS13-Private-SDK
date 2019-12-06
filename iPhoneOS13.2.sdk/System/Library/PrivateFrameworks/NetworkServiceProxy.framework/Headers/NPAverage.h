//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

@interface NPAverage : NSObject <NSSecureCoding>
{
    NSUInteger _size;
    NSMutableArray *_samples;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableArray *samples; // @synthesize samples=_samples;
@property NSUInteger size; // @synthesize size=_size;
// - (void).cxx_destruct;
- (id)shortDescription;
- (id)description;
@property(readonly) BOOL isAnyValid;
@property(readonly) BOOL isLastValid;
@property(readonly) NSUInteger average;
- (void)addSamples:(id)arg1;
- (void)addSample:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleSize:(NSUInteger)arg1;

@end

