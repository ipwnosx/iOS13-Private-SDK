//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDiscoveryShelfView.h>

@class PKContinuousButton, PKDiscoveryCallToAction, PKDiscoveryCallToActionShelf, PKDiscoveryMedia, UIImageView, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView
{
    PKDiscoveryCallToActionShelf *_ctaShelf;
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    CGSize _iconSize;
    BOOL _showActivityIndicator;
    id <PKDiscoveryCardViewDelegate> _delegate;
}

@property(nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGSize)_iconSize;
- (CGSize)_sizeForMedia;
- (double)_leadingEditorialTextSpace;
- (double)_leadingTitleSpace;
- (void)_buttonPressed:(id)arg1;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithShelf:(id)arg1;

@end

