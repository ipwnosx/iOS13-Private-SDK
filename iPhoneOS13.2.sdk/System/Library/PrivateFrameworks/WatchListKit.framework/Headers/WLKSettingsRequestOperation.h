//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSettingsRequestOperation : WLKNetworkRequestOperation
{
    NSDictionary *_response;
}

+ (id)_requestURL:(id )arg1;
@property(readonly, nonatomic) NSDictionary *response; // @synthesize response=_response;
// - (void).cxx_destruct;
- (void)processResponse;
- (void)prepareURLRequest:(CDUnknownBlockType)arg1;
- (id)init;

@end

