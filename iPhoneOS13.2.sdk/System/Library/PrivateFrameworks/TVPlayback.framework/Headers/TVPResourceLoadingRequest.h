//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest, NSDictionary, NSNumber, NSURL;

@interface TVPResourceLoadingRequest : NSObject
{
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property(readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
// - (void).cxx_destruct;
- (id)init;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSNumber *avRequestID;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4;
@property(readonly, nonatomic) BOOL isCancelled;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;

@end

