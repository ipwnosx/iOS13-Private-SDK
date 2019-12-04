//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIDynamicValueConvergenceAnimation;

__attribute__((visibility("hidden")))
@interface _UIFocusMotionEffectsController : NSObject
{
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;
    struct CGPoint _displayOffset;
    double _displayMovementAdjustment;
    _Bool _displayOffsetAccumulatorEnabled;
    struct CGPoint _currentOffset;
}

@property(nonatomic) _Bool displayOffsetAccumulatorEnabled; // @synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled;
@property(readonly, nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) struct CGPoint displayOffset;
- (void)cancelRollbackAnimation;
- (void)startRollbackAnimationFasterConvergence;
- (void)startRollbackAnimation;
- (void)reset;
- (void)resetDisplayOffsetAccumulationFactor;
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
- (void)updateCurrentOffset:(struct CGPoint)arg1 overrideDisplayOffset:(id)arg2;
- (void)updateCurrentOffset:(struct CGPoint)arg1;
- (id)init;

@end
