//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface AAAvailabilityResponse : AAResponse
{
    NSString *_status;
    NSString *_eta;
    NSString *_feature;
}

@property(readonly, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(readonly, nonatomic) NSString *eta; // @synthesize eta=_eta;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

