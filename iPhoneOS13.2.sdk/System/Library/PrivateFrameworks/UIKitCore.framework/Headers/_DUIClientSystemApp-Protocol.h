//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIDraggingSystemSessionInfo;
@protocol _DUIServerSessionSystemApp;

@protocol _DUIClientSystemApp
- (oneway void)dragDidEndWithSystemSession:(UIDraggingSystemSessionInfo *)arg1;
- (oneway void)dragDidBeginWithSystemSession:(id <_DUIServerSessionSystemApp>)arg1 info:(UIDraggingSystemSessionInfo *)arg2 reply:(void (^)(UIDraggingSystemTouchRoutingPolicy *))arg3;
@end
