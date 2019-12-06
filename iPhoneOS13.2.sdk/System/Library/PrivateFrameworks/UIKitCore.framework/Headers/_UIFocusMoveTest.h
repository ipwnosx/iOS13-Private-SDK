//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusTest.h>

@protocol UIFocusEnvironment, _UIFocusMoveTestDataSource, _UIFocusMoveTestDelegate;

@interface _UIFocusMoveTest : _UIFocusTest
{
    NSUInteger _activeNumberOfIterations;
    NSUInteger _currentIteration;
    NSUInteger _currentMove;
    struct {
        unsigned int isPerformingFocusMovement:1;
        unsigned int delegateRespondsToWillStartIteration:1;
        unsigned int delegateRespondsToDidFinishIteration:1;
        unsigned int delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToNumberOfIterations:1;
        unsigned int dataSourceRespondsToMaximumNumberOfMovesDuringIteration:1;
        unsigned int dataSourceRespondsToDelayBeforeMoveDuringIteration:1;
        unsigned int dataSourceRespondsToHeadingForMoveDuringIteration:1;
        unsigned int dataSourceRespondsToShouldResetFocusBeforeIteration:1;
    } _flags;
    BOOL _resetsFocusBeforeIterations;
    id <UIFocusEnvironment> _containerFocusEnvironment;
    NSUInteger _numberOfIterations;
    NSUInteger _maximumMovesPerIteration;
    double _movementDelay;
    NSUInteger _movementHeading;
    id <_UIFocusMoveTestDataSource> _dataSource;
}

@property(nonatomic) __weak id <_UIFocusMoveTestDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL resetsFocusBeforeIterations; // @synthesize resetsFocusBeforeIterations=_resetsFocusBeforeIterations;
@property(nonatomic) NSUInteger movementHeading; // @synthesize movementHeading=_movementHeading;
@property(nonatomic) double movementDelay; // @synthesize movementDelay=_movementDelay;
@property(nonatomic) NSUInteger maximumMovesPerIteration; // @synthesize maximumMovesPerIteration=_maximumMovesPerIteration;
@property(nonatomic) NSUInteger numberOfIterations; // @synthesize numberOfIterations=_numberOfIterations;
@property(nonatomic) __weak id <UIFocusEnvironment> containerFocusEnvironment; // @synthesize containerFocusEnvironment=_containerFocusEnvironment;
// - (void).cxx_destruct;
- (BOOL)_dataSourceShouldResetFocusBeforeIteration:(NSUInteger)arg1;
- (NSUInteger)_dataSourceHeadingForMove:(NSUInteger)arg1 duringIteration:(NSUInteger)arg2;
- (double)_dataSourceDelayBeforeMove:(NSUInteger)arg1 duringIteration:(NSUInteger)arg2;
- (NSUInteger)_dataSourceMaximumNumberOfMovesDuringIteration:(NSUInteger)arg1;
- (NSUInteger)_dataSourceNumberOfIterations;
- (void)_notifyDelegateDidMoveFocusAlongHeading:(NSUInteger)arg1 forMove:(NSUInteger)arg2 duringIteration:(NSUInteger)arg3;
- (void)_notifyDelegateWillMoveFocusAlongHeading:(NSUInteger)arg1 forMove:(NSUInteger)arg2 duringIteration:(NSUInteger)arg3;
- (void)_notifyDelegateDidFinishIteration:(NSUInteger)arg1;
- (void)_notifyDelegateWillStartIteration:(NSUInteger)arg1;
@property(nonatomic) __weak id <_UIFocusMoveTestDelegate> delegate;
- (void)_resetFocusIfNecessaryBeforeIteration:(NSUInteger)arg1;
- (void)_performFocusMovement;
- (void)_performFocusMovementAfterDelayForMove:(NSUInteger)arg1 iteration:(NSUInteger)arg2;
- (void)main;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)initWithIdentifier:(id)arg1;

@end
