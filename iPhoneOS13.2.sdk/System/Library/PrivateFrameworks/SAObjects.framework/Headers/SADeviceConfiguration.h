//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceConfiguration : SABaseClientBoundCommand
{
}

+ (id)deviceConfigurationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deviceConfiguration;
- (BOOL)requiresResponse;
@property(nonatomic) double initialInterstitialDelayForVoiceTriggerOneShotWithoutAudioDucking;
@property(nonatomic) double initialInterstitialDelayForCarPlay;
@property(nonatomic) double initialInterstitialDelay;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

