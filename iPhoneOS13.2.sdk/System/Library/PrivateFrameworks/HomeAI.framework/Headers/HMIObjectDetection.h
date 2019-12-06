//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface HMIObjectDetection : NSObject <NSSecureCoding>
{
    int _labelIndex;
    double _confidence;
    CGRect _boundingBox;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly) double confidence; // @synthesize confidence=_confidence;
@property(readonly) int labelIndex; // @synthesize labelIndex=_labelIndex;
- (id)description;
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(CGRect)arg3;
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(CGRect)arg3;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

