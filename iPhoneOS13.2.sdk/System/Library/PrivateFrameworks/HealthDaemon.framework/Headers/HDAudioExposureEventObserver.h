//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDProfile;

@interface HDAudioExposureEventObserver : NSObject <HDDataObserver>
{
    HDProfile *_profile;
}

// - (void).cxx_destruct;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)initWithProfile:(id)arg1;

@end

