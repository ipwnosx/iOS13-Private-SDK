//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CSAudioServerCrashMonitor;

@protocol CSAudioServerCrashMonitorDelegate <NSObject>

@optional
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(CSAudioServerCrashMonitor *)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(CSAudioServerCrashMonitor *)arg1;
@end

