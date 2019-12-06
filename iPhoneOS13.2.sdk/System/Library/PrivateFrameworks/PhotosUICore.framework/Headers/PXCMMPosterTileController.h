//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class PXCMMPosterHeaderView, PXCMMViewModel, PXMomentShareStatusPresentation, UIView;

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>
{
    NSUInteger _activityType;
    PXCMMViewModel *_viewModel;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    PXCMMPosterHeaderView *_posterHeaderView;
}

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateStatusString;
- (void)_updateContent;
- (void)prepareForReuse;
- (void)becomeReusable;
//  (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (id)initWithActivityType:(NSUInteger)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3;
- (id)init;

@end

