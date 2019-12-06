//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKFloatInAnimator : GKBubblePathAnimator
{
    BOOL _useWelcomeSpringValues;
    long long _focusBubbleType;
    double _delayIncrement;
    double _additionalDelay;
}

@property(nonatomic) double additionalDelay; // @synthesize additionalDelay=_additionalDelay;
@property(nonatomic) BOOL useWelcomeSpringValues; // @synthesize useWelcomeSpringValues=_useWelcomeSpringValues;
@property(nonatomic) double delayIncrement; // @synthesize delayIncrement=_delayIncrement;
@property(nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
- (id)floatBubblesSortedLeftToRightInContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (id)init;

@end

