//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString;

@protocol CSVoiceTriggerDelegate <NSObject>
- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1 deviceId:(NSString *)arg2;

@optional
- (void)raiseToSpeakDetected:(NSDictionary *)arg1;
- (void)voiceTriggerGotSuperVector:(NSData *)arg1;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1;
@end

