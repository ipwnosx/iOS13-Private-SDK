//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    id /* CDUnknownBlockType */ _outputBlock;
}

// - (void).cxx_destruct;
- (id)_lookupResponseForMissingAuthors:(id)arg1 error:(id )arg2;
- (id)_authorsWithResponseDictionary:(id)arg1;
- (void)main;
@property(copy) id /* CDUnknownBlockType */ outputBlock;
- (id)initWithClientContext:(id)arg1;

@end

