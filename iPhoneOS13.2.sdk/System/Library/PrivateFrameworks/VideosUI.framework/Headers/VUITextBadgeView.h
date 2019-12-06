//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKViewElement, NSAttributedString, NSTimer, UIImage, VUITextBadgeLayout, _TVImageView;
@protocol VUITextBadgeViewDelegate;

__attribute__((visibility("hidden")))
@interface VUITextBadgeView : UIView
{
    double _strokeSize;
    UIImage *_backgroundImage;
    _TVImageView *_imageView;
    VUITextBadgeLayout *_badgeLayout;
    id <VUITextBadgeViewDelegate> _delegate;
    NSAttributedString *_attributedTitle;
    IKViewElement *_viewElement;
    NSTimer *_expiryUpdateTimer;
    CGSize _glyphSize;
}

+ (BOOL)badgeElementHasContent:(id)arg1;
@property(retain, nonatomic) NSTimer *expiryUpdateTimer; // @synthesize expiryUpdateTimer=_expiryUpdateTimer;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) CGSize glyphSize; // @synthesize glyphSize=_glyphSize;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) __weak id <VUITextBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUITextBadgeLayout *badgeLayout; // @synthesize badgeLayout=_badgeLayout;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
// - (void).cxx_destruct;
- (void)_imageLoaded;
- (CGSize)_textSize;
- (void)_invalidateTimer;
- (void)drawRect:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)dealloc;
- (void)reset;
- (void)setElement:(id)arg1 withBadgeLayout:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

