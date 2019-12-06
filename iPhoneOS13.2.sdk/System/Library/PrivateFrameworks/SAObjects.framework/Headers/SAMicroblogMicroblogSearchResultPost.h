//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMicroblogMicroblogSearchResultBase.h>

@class NSArray, NSDate, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase
{
}

+ (id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2;
+ (id)microblogSearchResultPost;
@property(copy, nonatomic) NSURL *webAddress;
@property(nonatomic) long long retweetCount;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *retweetAuthor;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSString *location;
@property(nonatomic) long long favoritesCount;
@property(copy, nonatomic) NSArray *embeddedMentions;
@property(copy, nonatomic) NSArray *embeddedLinks;
@property(copy, nonatomic) NSArray *embeddedImages;
@property(copy, nonatomic) NSArray *embeddedHashtags;
@property(retain, nonatomic) SADecoratedString *decoratedContent;
@property(copy, nonatomic) NSDate *creationTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

