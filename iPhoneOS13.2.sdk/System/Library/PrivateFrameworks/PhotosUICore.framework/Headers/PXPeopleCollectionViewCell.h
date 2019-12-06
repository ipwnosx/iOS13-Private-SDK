//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXUIAssetBadgeViewDelegate-Protocol.h>

@class NSString, PXRoundedCornerOverlayView, UIButton, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate>
{
    CGRect _unitRect;
    BOOL _titleUsesAllCaps;
    BOOL _favorite;
    BOOL _isReordering;
    BOOL _ppt_fullImageLoaded;
    BOOL _blurApplied;
    UIImageView *_avatarView;
    NSString *_name;
    double _textAlpha;
    NSUInteger _selectionStyle;
    id <PXPeopleCollectionViewCellDelegate> _delegate;
    UILabel *_nameLabel;
    UIView *_selectionView;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIButton *_favoriteBadge;
    UIView *_highlightOverlayView;
    UIView *_checkmarkView;
    UIView *_gradientView;
    UIImageView *_mirrorView;
    UIVisualEffectView *_blurView;
    CGSize _avatarSize;
}

@property(nonatomic) CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) BOOL blurApplied; // @synthesize blurApplied=_blurApplied;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *mirrorView; // @synthesize mirrorView=_mirrorView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIView *highlightOverlayView; // @synthesize highlightOverlayView=_highlightOverlayView;
@property(retain, nonatomic) UIButton *favoriteBadge; // @synthesize favoriteBadge=_favoriteBadge;
@property(retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) BOOL ppt_fullImageLoaded; // @synthesize ppt_fullImageLoaded=_ppt_fullImageLoaded;
@property(nonatomic) __weak id <PXPeopleCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic, setter=setReordering:) BOOL isReordering; // @synthesize isReordering=_isReordering;
@property(nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(nonatomic) BOOL titleUsesAllCaps; // @synthesize titleUsesAllCaps=_titleUsesAllCaps;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
// - (void).cxx_destruct;
- (id)_stretchableGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 gradientColor:(id)arg3;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (void)_updateType;
- (long long)_preferredSizeClass;
- (void)_updateSelection;
- (void)_favoriteBadgePressed:(id)arg1;
- (CGSize)_avatarSizeForImageSize:(CGSize)arg1;
- (void)setSelected:(BOOL)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)setImage:(id)arg1 normalizedFaceRect:(CGRect)arg2;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

