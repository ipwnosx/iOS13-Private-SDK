//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, VSStateMachine;

@protocol VSStateMachineDelegate <NSObject>

@optional
- (void)stateMachine:(VSStateMachine *)arg1 transitionFromState:(NSString *)arg2;
- (void)stateMachine:(VSStateMachine *)arg1 transitionToState:(NSString *)arg2;
@end
