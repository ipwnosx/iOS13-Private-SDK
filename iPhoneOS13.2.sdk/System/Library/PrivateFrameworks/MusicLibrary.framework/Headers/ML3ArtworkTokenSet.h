//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3Entity, NSDictionary, NSString;

@interface ML3ArtworkTokenSet : NSObject
{
    ML3Entity *_entity;
    long long _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
    long long _fetchableArtworkSourceType;
    NSDictionary *_artworkSourceToTokenMap;
    BOOL _faultedInBestTokens;
    BOOL _faultedInTokens;
    double _retrievalTime;
}

@property(nonatomic) double retrievalTime; // @synthesize retrievalTime=_retrievalTime;
// - (void).cxx_destruct;
- (void)_faultInTokens;
- (void)_faultInBestTokens;
- (id)artworkTokenForSource:(long long)arg1;
@property(readonly, nonatomic) long long fetchableArtworkSourceType;
@property(readonly, nonatomic) NSString *fetchableArtworkToken;
@property(readonly, nonatomic) NSString *availableArtworkToken;
- (id)initWithEntity:(id)arg1 artworkType:(long long)arg2;

@end

