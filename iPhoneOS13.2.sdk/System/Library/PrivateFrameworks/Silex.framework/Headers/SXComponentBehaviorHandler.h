//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXComponentBehavior, SXComponentView, UIView;

@interface SXComponentBehaviorHandler : NSObject
{
    BOOL _isSetup;
    SXComponentView *_componentView;
    SXComponentBehavior *_behavior;
}

@property(readonly, nonatomic) BOOL isSetup; // @synthesize isSetup=_isSetup;
@property(readonly, nonatomic) SXComponentBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) SXComponentView *componentView; // @synthesize componentView=_componentView;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresContinuousUpdates;
@property(readonly, nonatomic) UIView *behaviorView;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;

@end

