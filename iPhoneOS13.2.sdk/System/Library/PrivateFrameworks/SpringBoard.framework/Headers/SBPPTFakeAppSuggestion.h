//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBBestAppSuggestion.h>

@class NSString, NSUUID;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion
{
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

// - (void).cxx_destruct;
- (id)suggestedLocationName;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)activityType;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;

@end

