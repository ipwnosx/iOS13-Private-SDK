//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface RTTUIUtilities : NSObject
{
    BOOL _inUnitTestMode;
    BOOL _headphoneJackSupportsTTY;
    NSObject<OS_dispatch_queue> *_callCenterQueue;
}

+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)arg1;
+ (id)phoneNumberStringFromString:(id)arg1;
// + (id)ASCIINumericStringFromString:(struct __CFString )arg1;
+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (BOOL)contactIsTTYContact:(id)arg1;
+ (id)sharedUtilityProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue; // @synthesize callCenterQueue=_callCenterQueue;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(nonatomic) BOOL inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
// - (void).cxx_destruct;
- (id)transcriptStringForConversation:(id)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (id)bubbleFillForMe:(BOOL)arg1;
- (id)tintedTTYIcon;
- (id)ttyIconWithTint:(id)arg1;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)bubbleColorForMe:(BOOL)arg1;
- (UIEdgeInsets)bubbleInsetForMe:(BOOL)arg1;
- (UIEdgeInsets)textInsetForMe:(BOOL)arg1;
- (long long)textAlignmentForMe:(BOOL)arg1;
- (id)ttyMeContact;
- (id)myPhoneNumber;
- (id)init;
- (NSUInteger)currentPreferredTransportMethod;

@end

