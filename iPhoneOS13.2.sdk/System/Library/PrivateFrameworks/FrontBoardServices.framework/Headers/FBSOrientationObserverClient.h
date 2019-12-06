//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient
{
    id <FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

// - (void).cxx_destruct;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)configureConnectMessage:(id)arg1;
- (void)_getActiveInterfaceOrientationSynchronously:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrientationInterest:(unsigned int)arg1;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (long long)activeInterfaceOrientation;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;

@end

