//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam
{
    NSError *_error;
}

+ (id)paramWithError:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)description;

@end

