//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation
{
    BOOL _allowsFuseHeaderEnrichment;
    ICMusicSubscriptionStatusRequest *_request;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) BOOL allowsFuseHeaderEnrichment; // @synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(BOOL)arg3 maximumRetryCount:(NSUInteger)arg4 completion:(CDUnknownBlockType)arg5;
- (void)execute;
- (id)initWithRequest:(id)arg1;

@end

