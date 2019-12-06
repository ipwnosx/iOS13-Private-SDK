//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRKAnimationCoordinating-Protocol.h>

@class UIView;

@interface _CRKCardViewControllerTransitionCoordinator : NSObject <CRKAnimationCoordinating>
{
    BOOL _animated;
    id /* CDUnknownBlockType */ _initialSetup;
    id /* CDUnknownBlockType */ _finalSetup;
    id /* CDUnknownBlockType */ _animations;
    id /* CDUnknownBlockType */ _completion;
    UIView *_containerView;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animations; // @synthesize animations=_animations;
@property(copy, nonatomic) id /* CDUnknownBlockType */ finalSetup; // @synthesize finalSetup=_finalSetup;
@property(copy, nonatomic) id /* CDUnknownBlockType */ initialSetup; // @synthesize initialSetup=_initialSetup;
@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
// - (void).cxx_destruct;
- (id)init;

@end

