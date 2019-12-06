//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol TVMediaControllerHosting;

@interface TVMediaTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _migrates;
    id <TVMediaControllerHosting> _fromHost;
    id <TVMediaControllerHosting> _toHost;
}

@property(retain, nonatomic) id <TVMediaControllerHosting> toHost; // @synthesize toHost=_toHost;
@property(retain, nonatomic) id <TVMediaControllerHosting> fromHost; // @synthesize fromHost=_fromHost;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)migratesMediaControllerFromHost:(id)arg1 toHost:(id)arg2;

@end

