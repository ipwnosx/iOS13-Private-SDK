//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriting : NSObject
{
    HDProfile *_profile;
}

@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)arg1;
- (BOOL)markTemplateAvailable:(id)arg1 error:(id )arg2;
- (id)initWithProfile:(id)arg1;

@end

