//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload
{
    MCAPNConfiguration *_attachAPN;
    NSArray *_APNs;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *APNs; // @synthesize APNs=_APNs;
@property(retain, nonatomic) MCAPNConfiguration *attachAPN; // @synthesize attachAPN=_attachAPN;
// - (void).cxx_destruct;
- (id)installationWarnings;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)APNsDescription;
- (id)APNsLabel;
- (id)APNConfigurationDescription;
- (id)attachAPNConfigurationLabel;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end

