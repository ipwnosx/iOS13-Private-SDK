//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *request;
- (id)initWithRequest:(id)arg1 playerPath:(id)arg2;

@end

