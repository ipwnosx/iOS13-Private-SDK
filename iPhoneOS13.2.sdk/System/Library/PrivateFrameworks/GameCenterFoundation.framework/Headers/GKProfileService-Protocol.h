//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

@protocol GKProfileService <NSObject>
- (oneway void)getOcelotStateForCurrentAppWithHandler:(void (^)(BOOL))arg1;
- (oneway void)setOcelotStateForCurrentApp;
- (oneway void)getProfilesForPlayerIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

