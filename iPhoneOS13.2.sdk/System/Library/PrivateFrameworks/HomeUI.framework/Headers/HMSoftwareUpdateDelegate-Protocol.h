//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMSoftwareUpdate, HMSoftwareUpdateDocumentation;

@protocol HMSoftwareUpdateDelegate <NSObject>

@optional
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentation:(HMSoftwareUpdateDocumentation *)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateDocumentationAvailable:(BOOL)arg2;
- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateState:(long long)arg2;
@end

