//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, NSAttributedString;

@interface _UIExpandingGlyphsView : UIView <_UIStatusBarDisplayable, CAAnimationDelegate>
{
    BOOL _expandsFromLeftToRight;
    BOOL _fadesOut;
    int _remainingAnimationCount;
    NSAttributedString *_attributedString;
    double _baselineOffset;
    NSArray *_imageViews;
    id /* CDUnknownBlockType */ _completionBlock;
    CGSize _intrinsicSize;
}

@property(nonatomic) CGSize intrinsicSize; // @synthesize intrinsicSize=_intrinsicSize;
@property(nonatomic) int remainingAnimationCount; // @synthesize remainingAnimationCount=_remainingAnimationCount;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) BOOL fadesOut; // @synthesize fadesOut=_fadesOut;
@property(nonatomic) BOOL expandsFromLeftToRight; // @synthesize expandsFromLeftToRight=_expandsFromLeftToRight;
@property(readonly, nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)animateCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(CGRect)arg1;
@property(readonly, nonatomic) BOOL prefersBaselineAlignment;

@end

