//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class PLForegroundMonitor;

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate>
{
    BOOL _isCameraRunning;
    PLForegroundMonitor *_foregroundMonitor;
}

@property(readonly, nonatomic) PLForegroundMonitor *foregroundMonitor; // @synthesize foregroundMonitor=_foregroundMonitor;
@property(readonly, nonatomic) BOOL isCameraRunning; // @synthesize isCameraRunning=_isCameraRunning;
// - (void).cxx_destruct;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3;
- (id)init;

@end

