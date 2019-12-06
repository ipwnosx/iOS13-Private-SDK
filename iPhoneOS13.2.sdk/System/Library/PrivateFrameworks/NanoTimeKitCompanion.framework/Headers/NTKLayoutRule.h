//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLKDevice;

@interface NTKLayoutRule : NSObject <NSCopying>
{
    BOOL _clipsToReferenceFrame;
    CLKDevice *_device;
    long long _horizontalLayout;
    long long _verticalLayout;
    CGRect _referenceFrame;
    CGAffineTransform _transform;
}

+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4 clip:(BOOL)arg5 transform:(CGAffineTransform)arg6;
+ (id)layoutRuleForDevice:(id)arg1 withReferenceFrame:(CGRect)arg2 horizontalLayout:(long long)arg3 verticalLayout:(long long)arg4;
@property(nonatomic) CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) BOOL clipsToReferenceFrame; // @synthesize clipsToReferenceFrame=_clipsToReferenceFrame;
@property(nonatomic) long long verticalLayout; // @synthesize verticalLayout=_verticalLayout;
@property(nonatomic) long long horizontalLayout; // @synthesize horizontalLayout=_horizontalLayout;
@property(nonatomic) CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (id)description;
- (void)validate;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) CGSize maximumSize;
- (CGRect)calculateLayoutFrameForBoundsSize:(CGSize)arg1;
- (double)calculateLayoutFrameHeightForBoundsSize:(CGSize)arg1;
- (double)calculateLayoutFrameWidthForBoundsSize:(CGSize)arg1;
- (double)calculateLayoutFrameYOriginForBoundsSize:(CGSize)arg1;
- (double)calculateLayoutFrameXOriginForBoundsSize:(CGSize)arg1;
- (id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(CGRect)arg1;
- (id)initForDevice:(id)arg1;

@end

