//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSServiceFacilityClient
{
    long long _numberOfCheckOuts;
}

+ (id)serviceFacilityIdentifier;
+ (void)checkInClient:(id)arg1;
+ (id)checkOutClientWithClass:(Class)arg1;
- (BOOL)_decrementCheckout;
- (void)_incrementCheckout;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (id)initWithCalloutQueue:(id)arg1;

@end

