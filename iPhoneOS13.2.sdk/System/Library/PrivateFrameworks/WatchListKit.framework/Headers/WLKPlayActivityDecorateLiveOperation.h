//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKPlayActivityDecorateLiveOperation : WLKUTSNetworkRequestOperation
{
    NSString *_channelID;
    NSString *_serviceID;
}

@property(readonly, copy, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
// - (void).cxx_destruct;
- (id)initWithChannelID:(id)arg1 serviceID:(id)arg2;

@end

