//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber;
@protocol SAClientBoundCommand;

@interface SAPhoneVoiceMailSnippet : SAUISnippet
{
}

+ (id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceMailSnippet;
@property(retain, nonatomic) id <SAClientBoundCommand> postPlayCommand;
@property(copy, nonatomic) NSArray *playVoiceMailCommands;
@property(copy, nonatomic) NSArray *calls;
@property(copy, nonatomic) NSNumber *autoPlay;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

