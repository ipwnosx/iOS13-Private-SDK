//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSNumber, NSString;
@protocol __NSString__;

@protocol SBSSwitcherDemoCommandsClientToServerInterface <NSObject>
- (BOOL)setShouldDisableSwitcherModelUpdates:(NSNumber *)arg1;
- (BOOL)updateHiddenApplicationBundleIDs:(NSArray<__NSString__> *)arg1;
- (BOOL)loadStashedSwitcherModelFromFilename:(NSString *)arg1;
- (BOOL)stashSwitcherModelToFilename:(NSString *)arg1;
@end

