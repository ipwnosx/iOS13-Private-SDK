//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAutoSubtitles : SABaseClientBoundCommand
{
}

+ (id)setAutoSubtitlesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAutoSubtitles;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *languageOptionChangeUserSetting;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

