//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoTurnOnSubtitles : SABaseClientBoundCommand
{
}

+ (id)turnOnSubtitlesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)turnOnSubtitles;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *languageOptionChangeUserSetting;
@property(copy, nonatomic) NSString *desiredOptionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

