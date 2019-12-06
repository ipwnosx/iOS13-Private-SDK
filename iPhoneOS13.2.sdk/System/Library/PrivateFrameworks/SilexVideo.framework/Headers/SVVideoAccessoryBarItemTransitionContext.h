//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemTransitionContext-Protocol.h>

@class UIView;

@interface SVVideoAccessoryBarItemTransitionContext : NSObject <SVVideoAccessoryItemTransitionContext>
{
    BOOL _transitionWasCancelled;
    UIView *_fromView;
    UIView *_toView;
    UIView *_containerView;
    id /* CDUnknownBlockType */ _completionBlock;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
// - (void).cxx_destruct;
- (void)completeTransition:(BOOL)arg1;
- (id)initWithContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

