//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NUAdBannerView;

@interface NUVideoAdMetadata : NSObject
{
    NUAdBannerView *_bannerView;
    NSString *_adCampaign;
    NSString *_adLine;
    NSString *_adCreative;
    NSString *_impressionIdentifier;
    double _duration;
    double _timePlayed;
    NSUInteger _position;
    double _impressionThreshold;
}

@property(nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property(nonatomic) NSUInteger position; // @synthesize position=_position;
@property(nonatomic) double timePlayed; // @synthesize timePlayed=_timePlayed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *impressionIdentifier; // @synthesize impressionIdentifier=_impressionIdentifier;
@property(copy, nonatomic) NSString *adCreative; // @synthesize adCreative=_adCreative;
@property(copy, nonatomic) NSString *adLine; // @synthesize adLine=_adLine;
@property(copy, nonatomic) NSString *adCampaign; // @synthesize adCampaign=_adCampaign;
@property(retain, nonatomic) NUAdBannerView *bannerView; // @synthesize bannerView=_bannerView;
// - (void).cxx_destruct;

@end

