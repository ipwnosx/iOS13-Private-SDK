//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PHAActivityGovernor;

@protocol PHAActivityGovernorDelegate <NSObject>
- (void)governorDidRevokeForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidRevokeBackgroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantBackgroundAccess:(PHAActivityGovernor *)arg1;
@end

