//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICLibraryAuthServiceClientTokenResponse, ICStoreRequestContext;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation
{
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

// - (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end

