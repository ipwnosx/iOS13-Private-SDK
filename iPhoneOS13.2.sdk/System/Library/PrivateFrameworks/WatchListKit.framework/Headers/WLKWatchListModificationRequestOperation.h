//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation
{
    NSUInteger _action;
    NSString *_itemID;
    WLKWatchListModificationResponse *_response;
}

@property(readonly, nonatomic) WLKWatchListModificationResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSUInteger action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)processResponse;
- (id)initWithAction:(NSUInteger)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4;
- (id)initWithAction:(NSUInteger)arg1 identifier:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(NSUInteger)arg1 statsID:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(NSUInteger)arg1 canonicalID:(id)arg2 caller:(id)arg3;

@end

