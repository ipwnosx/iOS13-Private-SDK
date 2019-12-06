//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface BKSHitTestRegion : NSObject <NSSecureCoding>
{
    CGRect _rect;
    CGRect _exclusiveTouchNormalizedSubRect;
    CGRect _exclusiveTouchNormalizedSubRectInRef erenceSpace;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=_exclusiveTouchNormalizedSubRectInReferenceSpace) CGRect exclusiveTouchNormalizedSubRectInReferenceSpace; // @synthesize exclusiveTouchNormalizedSubRectInReferenceSpace=_exclusiveTouchNormalizedSubRectInRef erenceSpace;
@property(nonatomic) CGRect exclusiveTouchNormalizedSubRect; // @synthesize exclusiveTouchNormalizedSubRect=_exclusiveTouchNormalizedSubRect;
@property(readonly, nonatomic) CGRect rect; // @synthesize rect=_rect;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)_initWithRect:(CGRect)arg1 exclusiveTouchNormalizedSubRect:(CGRect)arg2;
- (id)initWithRect:(CGRect)arg1 exclusiveTouchSubRect:(CGRect)arg2;
- (id)initWithRect:(CGRect)arg1;

@end

