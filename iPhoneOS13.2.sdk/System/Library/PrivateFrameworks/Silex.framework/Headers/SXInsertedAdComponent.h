//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBannerAdComponent-Protocol.h>
#import <Silex/SXInsertableComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary, UIColor;
@protocol SXComponentAnchor;

@interface SXInsertedAdComponent : NSObject <SXInsertableComponent, SXBannerAdComponent>
{
    BOOL _hidden;
    NSString *_identifier;
    SXComponentAnimation *_animation;
    SXJSONArray *_behaviors;
    NSUInteger _bannerType;
    NSUInteger _adType;
    NSString *_style;
    id <SXComponentAnchor> _anchor;
    NSString *_layout;
    SXComponentConditions *_conditions;
    SXJSONDictionary *_advertising;
    SXJSONDictionary *_analytics;
    SXJSONArray *_additions;
}

@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) SXJSONArray *additions; // @synthesize additions=_additions;
@property(readonly, nonatomic) SXJSONDictionary *analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) SXJSONDictionary *advertising; // @synthesize advertising=_advertising;
@property(readonly, nonatomic) SXComponentConditions *conditions; // @synthesize conditions=_conditions;
@property(retain, nonatomic) NSString *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id <SXComponentAnchor> anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) NSString *style; // @synthesize style=_style;
@property(readonly, nonatomic) NSUInteger adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) NSUInteger bannerType; // @synthesize bannerType=_bannerType;
@property(readonly, nonatomic) SXJSONArray *behaviors; // @synthesize behaviors=_behaviors;
@property(readonly, nonatomic) SXComponentAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger placementType;
@property(readonly, nonatomic) UIColor *debugColor;
@property(readonly, nonatomic) NSUInteger traits;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) NSUInteger contentRelevance;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithAdType:(NSUInteger)arg1;

@end

