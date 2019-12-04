//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKViewElement, NSArray, VUIProductInfoAiringView, VUIProductMetadataLayout, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIProductMetadataView : UIView
{
    NSArray *_sectionViews;
    VUIProductMetadataLayout *_viewLayout;
    UIView *_defaultFocusView;
    VUIProductInfoAiringView *_airingView;
    VUISeparatorView *_separatorView;
    IKViewElement *_viewElement;
}

+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUIProductInfoAiringView *airingView; // @synthesize airingView=_airingView;
@property(retain, nonatomic) UIView *defaultFocusView; // @synthesize defaultFocusView=_defaultFocusView;
@property(retain, nonatomic) VUIProductMetadataLayout *viewLayout; // @synthesize viewLayout=_viewLayout;
@property(retain, nonatomic) NSArray *sectionViews; // @synthesize sectionViews=_sectionViews;
- (id)_generateSectionViewFromElement:(id)arg1;
- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateViewWithSections:(id)arg1;

@end
