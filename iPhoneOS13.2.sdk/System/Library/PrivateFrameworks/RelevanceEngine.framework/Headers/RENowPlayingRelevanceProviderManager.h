//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/RENowPlayingRelevanceProviderManagerProperties-Protocol.h>

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties>
{
    NSUInteger _state;
}

+ (Class)_relevanceProviderClass;
+ (id)_features;
@property(readonly, nonatomic) NSUInteger state;
- (void)_updatePlaybackState;
- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

