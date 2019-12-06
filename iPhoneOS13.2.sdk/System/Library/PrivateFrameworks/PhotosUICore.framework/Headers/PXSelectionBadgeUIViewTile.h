//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@interface PXSelectionBadgeUIViewTile : UIView <PXReusableObject, PXUIViewBasicTile>
{
    BOOL _needsUpdate;
    UIView *_selectedView;
    UIView *_unselectedView;
    BOOL __selected;
}

+ (CGSize)preferredSize;
@property(nonatomic, setter=_setSelected:) BOOL _selected; // @synthesize _selected=__selected;
// - (void).cxx_destruct;
- (void)_showUnselectedView;
- (void)_showSelectedView;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidate;
//  (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (id)initWithFrame:(CGRect)arg1;

@end

