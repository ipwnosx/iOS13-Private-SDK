//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SAMPMediaItem;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getStateResponse;
- (BOOL)requiresResponse;
@property(nonatomic) int state;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSNumber *listeningToMusicApplication;
@property(retain, nonatomic) SAMPMediaItem *listeningToItem;
@property(copy, nonatomic) NSString *hashedGroupID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

