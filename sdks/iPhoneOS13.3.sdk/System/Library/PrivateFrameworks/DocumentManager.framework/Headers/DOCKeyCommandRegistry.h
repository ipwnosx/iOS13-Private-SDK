//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DOCKeyCommandRegistry : NSObject
{
    BOOL _singleCharKeyCommandsEnabled;
}

+ (id)_reversedDefaultIdentifiersAndKeyCommands;
+ (id)_defaultIdentifiersAndKeyCommands;
+ (id)_inputsOfAlwaysEnabledSingleCharKeyCommands;
+ (id)sharedInstance;
@property(getter=areSingleCharKeyCommandsEnabled) BOOL singleCharKeyCommandsEnabled; // @synthesize singleCharKeyCommandsEnabled=_singleCharKeyCommandsEnabled;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 defaultBehavior:(BOOL)arg3;
- (BOOL)_shouldOfferKeyCommand:(id)arg1;
- (void)_registerForKeyCommandWithIdentifier:(id)arg1 viewController:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_postNotificationForKeyCommandIdentifier:(id)arg1 modifierFlags:(long long)arg2;
- (void)registerForKeyCommandWithIdentifiers:(id)arg1 viewController:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)keyCommandWasPerformed:(id)arg1;
- (id)dismissingKeyCommandsWithAction:(SEL)arg1;
- (id)dismissingKeyCommands;
- (id)defaultKeyCommandsByExcludingKeyCommandsWithIdentifiers:(id)arg1;
- (id)init;

@end
