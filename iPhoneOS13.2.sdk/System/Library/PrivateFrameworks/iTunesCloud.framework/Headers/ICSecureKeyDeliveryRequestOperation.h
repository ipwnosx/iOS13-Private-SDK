//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation
{
    ICSecureKeyDeliveryRequest *_request;
    id /* CDUnknownBlockType */ _responseHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICSecureKeyDeliveryRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (void)execute;

@end

