//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPrivateListeningStateSource.h>

@class ICUserIdentity, NSNumber;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource
{
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedAccessQueue;
// - (void).cxx_destruct;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_loadCurrentValueFromIdentityProperties;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)currentValue;
- (void)dealloc;
- (id)_initWithUserIdentity:(id)arg1;

@end

