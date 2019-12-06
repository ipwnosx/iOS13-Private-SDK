//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/RESiriEngagementPredictorProperties-Protocol.h>
#import <RelevanceEngine/REUpNextSiriObserver-Protocol.h>

@class NSString, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver, RESiriEngagementPredictorProperties>
{
    REUpNextTimer *_siriDecayTimer;
    NSString *_lastSiriDomain;
    float _siriInfluence;
}

+ (id)supportedFeatures;
// - (void).cxx_destruct;
@property(readonly, nonatomic) float siriInfluence;
@property(readonly, nonatomic) NSString *lastSiriDomain;
- (void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)_init;

@end

