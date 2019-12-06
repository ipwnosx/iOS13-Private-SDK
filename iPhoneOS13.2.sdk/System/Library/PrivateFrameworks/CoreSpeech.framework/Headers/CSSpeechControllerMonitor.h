//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechControllerMonitor : CSEventMonitor
{
    NSUInteger _recordState;
}

+ (id)sharedInstance;
@property(nonatomic) NSUInteger recordState; // @synthesize recordState=_recordState;
- (void)notifySpeechControllerRecordStateChange:(NSUInteger)arg1 withEventUUID:(id)arg2;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;

@end

