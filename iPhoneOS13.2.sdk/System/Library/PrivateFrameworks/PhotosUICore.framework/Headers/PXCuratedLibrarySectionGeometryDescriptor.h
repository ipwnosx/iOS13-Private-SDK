//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXDisplayAsset;

@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject
{
    id <PXDisplayAsset> _headerAsset;
    long long _visualPosition;
//     CDStruct_2bd92d94 _headerCornerRadius;
    CGRect _sectionRect;
    CGRect _keyAssetRect;
    CGRect _headerRect;
}

@property(readonly, nonatomic) long long visualPosition; // @synthesize visualPosition=_visualPosition;
@property(readonly, nonatomic) id <PXDisplayAsset> headerAsset; // @synthesize headerAsset=_headerAsset;
// @property(readonly, nonatomic) CDStruct_2bd92d94 headerCornerRadius; // @synthesize headerCornerRadius=_headerCornerRadius;
@property(readonly, nonatomic) CGRect headerRect; // @synthesize headerRect=_headerRect;
@property(readonly, nonatomic) CGRect keyAssetRect; // @synthesize keyAssetRect=_keyAssetRect;
@property(readonly, nonatomic) CGRect sectionRect; // @synthesize sectionRect=_sectionRect;
// - (void).cxx_destruct;
// - (CDStruct_2bd92d94)cornerRadiusForRect:(CGRect)arg1;
- (CGRect)resizeRect:(CGRect)arg1 fromGeometryDesciptor:(id)arg2 inContainer:(long long)arg3 resizing:(NSUInteger)arg4;
- (id)sectionGeometryDescriptorWithHeaderRect:(CGRect)arg1;
- (id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(double)arg1;
- (id)sectionGeometryDescriptorTransformedBy:(CGAffineTransform)arg1;
- (id)sectionGeometryDescriptorOffsetBy:(CGPoint)arg1;
- (id)sectionGeometryDescriptorWithVisualPosition:(long long)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)initWithSectionRect:(CGRect)arg1 headerRect:(CGRect)arg2 keyAssetRect:(CGRect)arg3 headerCornerRadius:(CDStruct_2bd92d94)arg4 headerAsset:(id)arg5 visualPosition:(long long)arg6;
// - (id)initWithSectionRect:(CGRect)arg1 headerRect:(CGRect)arg2 keyAssetRect:(CGRect)arg3 headerCornerRadius:(CDStruct_2bd92d94)arg4 headerAsset:(id)arg5;
- (id)init;

@end

