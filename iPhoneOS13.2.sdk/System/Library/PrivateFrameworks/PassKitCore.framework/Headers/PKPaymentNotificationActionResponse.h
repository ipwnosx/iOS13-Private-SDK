//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse
{
    NSDictionary *_aps;
    NSString *_action;
    NSString *_requestID;
}

@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSDictionary *aps; // @synthesize aps=_aps;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

