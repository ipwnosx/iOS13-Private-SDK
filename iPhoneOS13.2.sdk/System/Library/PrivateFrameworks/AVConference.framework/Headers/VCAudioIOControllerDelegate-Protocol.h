//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCBasebandCodecNotifications-Protocol.h>

@class NSError;

@protocol VCAudioIOControllerDelegate <VCBasebandCodecNotifications>
- (void)spatialAudioSourceIDChanged:(NSUInteger)arg1;
- (void)didResume;
- (void)didSuspend;
// - (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(BOOL)arg1 error:(NSError *)arg2;
- (void)didStart:(BOOL)arg1 error:(NSError *)arg2;
@end

