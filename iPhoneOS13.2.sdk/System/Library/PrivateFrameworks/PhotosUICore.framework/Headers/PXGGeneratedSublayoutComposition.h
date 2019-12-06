//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition
{
    PXLayoutGenerator *_layoutGenerator;
//    struct _PXLayoutGeometry _layoutGeometries;
    long long _layoutGeometriesCapacity;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) PXLayoutGenerator *configuredLayoutGenerator;
- (CGRect)contentBounds;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;
- (void)updateEstimatedSublayoutGeometries;
- (void)invalidateLayout;
- (void)referenceSizeDidChange;
- (void)dealloc;

@end

