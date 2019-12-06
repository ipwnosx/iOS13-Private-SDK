//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface HFAccessoryProfileGroup : NSObject
{
    NSArray *_profiles;
    NSNumber *_groupIdentifier;
}

+ (id)_hashCombiningHashes:(id)arg1;
+ (id)_groupIdentifierForProfile:(id)arg1 options:(id)arg2;
+ (id)_groupProfilesKeyedByIdentifier:(id)arg1 options:(id)arg2;
+ (id)groupProfiles:(id)arg1 options:(id)arg2;
@property(readonly, copy, nonatomic) NSNumber *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
// - (void).cxx_destruct;
- (id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2;

@end

