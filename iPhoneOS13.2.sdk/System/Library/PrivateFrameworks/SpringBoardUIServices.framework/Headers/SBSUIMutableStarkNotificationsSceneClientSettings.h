//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIMutableApplicationSceneClientSettings.h>

#import <SpringBoardUIServices/SBSUIStarkNotificationsSceneClientSettings-Protocol.h>

@class NSString;

@interface SBSUIMutableStarkNotificationsSceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool shouldBorrowScreen;
@property(nonatomic, getter=isDisplayingNotification) _Bool displayingNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
