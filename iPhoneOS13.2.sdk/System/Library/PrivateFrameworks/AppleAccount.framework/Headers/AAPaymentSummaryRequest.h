//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest
{
    NSString *_secondaryAuthToken;
    NSString *_heartbeatToken;
}

+ (Class)responseClass;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property(copy, nonatomic) NSString *secondaryAuthToken; // @synthesize secondaryAuthToken=_secondaryAuthToken;
// - (void).cxx_destruct;
- (id)urlRequest;
- (BOOL)forceGSToken;
- (id)urlString;

@end

