//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDCameraSnapshotData, HMDCameraStreamSnapshotCapture;

@protocol HMDCameraStreamSnapshotCaptureDelegate <NSObject>
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetLastSnapshot:(HMDCameraSnapshotData *)arg2;
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetNewSnapshot:(HMDCameraSnapshotData *)arg2;
@end

