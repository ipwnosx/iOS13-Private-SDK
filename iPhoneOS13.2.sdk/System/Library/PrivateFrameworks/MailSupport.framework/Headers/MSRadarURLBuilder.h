//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSRadarURLBuilder : NSObject
{
    BOOL _prependSystemVersionToTitle;
    BOOL _appendStandardDisclaimerToDescription;
    BOOL _appendSysdiagnoseHowTo;
    NSString *_title;
    NSString *_radarDescription;
    long long _component;
    long long _reproducibility;
    long long _classification;
    NSArray *_extensionIdentifiers;
}

+ (id)_URLFromQueryItems:(id)arg1 builder:(id)arg2;
+ (id)radarURLWithBuilder:(CDUnknownBlockType)arg1;
+ (id)componentIDFromRadarComponent:(long long)arg1;
+ (id)componentNameFromRadarComponent:(long long)arg1;
+ (id)_componentInfoDictionaryFromComponent:(long long)arg1;
+ (id)stringFromRadarReproducibility:(long long)arg1;
+ (id)stringFromRadarClassification:(long long)arg1;
+ (BOOL)canOpenRadar;
@property(copy, nonatomic) NSArray *extensionIdentifiers; // @synthesize extensionIdentifiers=_extensionIdentifiers;
@property(nonatomic) long long classification; // @synthesize classification=_classification;
@property(nonatomic) long long reproducibility; // @synthesize reproducibility=_reproducibility;
@property(nonatomic) long long component; // @synthesize component=_component;
@property(nonatomic) BOOL appendSysdiagnoseHowTo; // @synthesize appendSysdiagnoseHowTo=_appendSysdiagnoseHowTo;
@property(nonatomic) BOOL appendStandardDisclaimerToDescription; // @synthesize appendStandardDisclaimerToDescription=_appendStandardDisclaimerToDescription;
@property(copy, nonatomic) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(nonatomic) BOOL prependSystemVersionToTitle; // @synthesize prependSystemVersionToTitle=_prependSystemVersionToTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)init;

@end

