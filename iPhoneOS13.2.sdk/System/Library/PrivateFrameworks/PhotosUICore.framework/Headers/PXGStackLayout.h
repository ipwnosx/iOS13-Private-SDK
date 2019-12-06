//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGDataSourceDrivenLayout-Protocol.h>

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout>
{
//     CDStruct_d97c9657 _updateFlags;
    BOOL _isUpdatingSublayouts;
    CGPoint _sublayoutOriginsBeforeUpdate;
    long long _axis;
    double _interlayoutSpacing;
    UIEdgeInsets _padding;
    UIEdgeInsets _faultInOutsets;
    UIEdgeInsets _faultOutOutsets;
}

@property(nonatomic) UIEdgeInsets faultOutOutsets; // @synthesize faultOutOutsets=_faultOutOutsets;
@property(nonatomic) UIEdgeInsets faultInOutsets; // @synthesize faultInOutsets=_faultInOutsets;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (void)screenScaleDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)willRemoveSublayout:(id)arg1;
- (void)didAddSublayout:(id)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(NSRange *)arg2;
- (void)_updateSublayouts;
- (void)_updateInterlayoutSpacing;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)update;
- (void)dealloc;
- (id)init;

@end

