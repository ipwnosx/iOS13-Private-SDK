//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKNavigationBarCanvasViewDelegate-Protocol.h>

@class CKNavigationBarCanvasView, UIButton, UILabel;
@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate>
{
    id <CKNavbarCanvasViewControllerDelegate> _delegate;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    CKNavigationBarCanvasView *_canvasView;
}

@property(retain, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <CKNavbarCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (id)_windowTraitCollection;
- (BOOL)_shouldUseRTL;
- (void)_setupDefaultCanvasView;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)loadView;
- (void)viewDidLoad;

@end

