//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSURL, SAWLWatchListChannelDetails;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>
{
}

+ (id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2;
+ (id)watchListPlayable;
@property(copy, nonatomic) NSURL *playURL;
@property(nonatomic) BOOL installed;
@property(nonatomic) BOOL entitled;
@property(retain, nonatomic) SAWLWatchListChannelDetails *channelDetails;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

