//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetBool.h>

#import <SAObjects/SASettingAppSettingCommand-Protocol.h>

@class NSString;

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>
{
}

+ (id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAppService;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *appWithSettingsId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

