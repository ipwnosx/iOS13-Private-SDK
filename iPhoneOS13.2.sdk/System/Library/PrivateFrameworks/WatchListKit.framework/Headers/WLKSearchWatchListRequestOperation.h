//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation
{
    NSDictionary *_query;
    WLKSearchWatchListResponse *_response;
}

@property(readonly, nonatomic) WLKSearchWatchListResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;
// - (void).cxx_destruct;
- (void)processResponse;
- (id)initWithQuery:(id)arg1 caller:(id)arg2;

@end

