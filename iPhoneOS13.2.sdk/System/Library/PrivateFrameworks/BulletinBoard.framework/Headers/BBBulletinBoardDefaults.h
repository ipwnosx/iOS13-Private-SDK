//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain
{
}

+ (id)standardDefaults;
- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(nonatomic) long long globalContentPreviewSetting; // @dynamic globalContentPreviewSetting;
@property(nonatomic) long long globalSpokenNotificationSetting; // @dynamic globalSpokenNotificationSetting;
@property(nonatomic, getter=isSpokenNotificationsSupported) _Bool spokenNotificationsSupported; // @dynamic spokenNotificationsSupported;

@end
