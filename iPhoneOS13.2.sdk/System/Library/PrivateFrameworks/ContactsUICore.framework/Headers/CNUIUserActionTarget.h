//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNTUCallProvider;

@interface CNUIUserActionTarget : NSObject
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_teamIdentifier;
    NSString *_actionType;
    id <CNTUCallProvider> _callProvider;
}

+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForSendMessageIntentWithAppProxy:(id)arg1;
+ (id)targetForTextWithSkype;
+ (id)targetForTextWithMessages;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)arg1;
+ (id)targetForVideoWithCallProvider:(id)arg1;
+ (id)targetForVideoWithSkype;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)arg1;
+ (id)targetForVoiceWithCallProvider:(id)arg1;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithTelephony;
+ (id)targetForDirections;
+ (id)targetForPayWithWallet;
+ (id)targetForEmailWithMail;
@property(retain) id <CNTUCallProvider> callProvider; // @synthesize callProvider=_callProvider;
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)actionsForPostalAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 teamIdentifier:(id)arg3;
- (id)init;

@end

