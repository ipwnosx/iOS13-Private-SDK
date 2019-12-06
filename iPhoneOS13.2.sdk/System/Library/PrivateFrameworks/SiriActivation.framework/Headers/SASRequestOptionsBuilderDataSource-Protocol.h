//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SASRequestOptionsBuilderDataSourceForTesting-Protocol.h>

@class NSString, SASActivationRequest, SASRequestOptionsBuilder;

@protocol SASRequestOptionsBuilderDataSource <SASRequestOptionsBuilderDataSourceForTesting>
- (NSUInteger)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 currentLockStateForActivation:(SASActivationRequest *)arg2;
- (NSString *)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 uiPresentationIdentifierWithActivation:(SASActivationRequest *)arg2 activationPresentation:(long long)arg3;
- (BOOL)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(SASActivationRequest *)arg2;
- (BOOL)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isAcousticIdAllowedWithActiviation:(SASActivationRequest *)arg2;
- (BOOL)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isPredictedRecordRouteIsZLLWithActiviation:(SASActivationRequest *)arg2;
- (BOOL)requestOptionsBuilder:(SASRequestOptionsBuilder *)arg1 isRequestInitialWithActiviation:(SASActivationRequest *)arg2;
@end

