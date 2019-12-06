//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBRootFolderPageStateProviding-Protocol.h>

@class NSString;
@protocol SBRootFolderPageTransition;

@protocol SBRootFolderPageStateTransitioning <SBRootFolderPageStateProviding>
@property(readonly, nonatomic) long long destinationPageState;
@property(readonly, nonatomic, getter=isTransitioningPageState) BOOL transitioningPageState;
- (id <SBRootFolderPageTransition>)beginPageStateTransitionToState:(long long)arg1 reason:(NSString *)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
- (void)performPageStateTransitionToState:(long long)arg1 reason:(NSString *)arg2 animated:(BOOL)arg3 completionHandler:(void (^)(void))arg4;
- (BOOL)canTransitionPageStateToState:(long long)arg1;
@end

