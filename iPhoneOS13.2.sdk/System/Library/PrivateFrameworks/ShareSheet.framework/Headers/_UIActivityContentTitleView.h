//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView
{
    LPLinkView *_linkView;
    NSLayoutConstraint *_linkTrailingAnchor;
}

@property(retain, nonatomic) NSLayoutConstraint *linkTrailingAnchor; // @synthesize linkTrailingAnchor=_linkTrailingAnchor;
@property(retain, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)contentDidChange;

@end

