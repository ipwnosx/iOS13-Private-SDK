//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSData, NSString;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue
{
    NSString *_identifier;
    NSData *_customData;
}

+ (id)customDataQueueWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;
@property(readonly, nonatomic) NSData *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
//  (struct _MRSystemAppPlaybackQueue )createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;

@end

