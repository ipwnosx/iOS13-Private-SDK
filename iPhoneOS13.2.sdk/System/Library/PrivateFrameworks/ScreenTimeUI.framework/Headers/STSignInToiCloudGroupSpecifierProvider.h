//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

#import <ScreenTimeUI/AAUISignInControllerDelegate-Protocol.h>
#import <ScreenTimeUI/MCProfileConnectionObserver-Protocol.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver>
{
    PSSpecifier *_signInSpecifier;
}

@property(retain, nonatomic) PSSpecifier *signInSpecifier; // @synthesize signInSpecifier=_signInSpecifier;
// - (void).cxx_destruct;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)_updateEnabledValue;
- (void)presentAppleAccountSignInController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)setCoordinator:(id)arg1;
- (void)dealloc;
- (id)init;

@end

