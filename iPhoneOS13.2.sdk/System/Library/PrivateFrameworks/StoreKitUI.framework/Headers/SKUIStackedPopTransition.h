//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SKUIStackedBar;

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _split;
    SKUIStackedBar *_fromBar;
    SKUIStackedBar *_toBar;
}

@property(retain, nonatomic) SKUIStackedBar *toBar; // @synthesize toBar=_toBar;
@property(retain, nonatomic) SKUIStackedBar *fromBar; // @synthesize fromBar=_fromBar;
@property(nonatomic) double split; // @synthesize split=_split;
// - (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end

