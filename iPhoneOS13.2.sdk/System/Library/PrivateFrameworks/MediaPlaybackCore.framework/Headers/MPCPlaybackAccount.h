//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICUserIdentity, NSString;

@interface MPCPlaybackAccount : NSObject <NSCopying>
{
    BOOL _hasCloudLibraryEnabled;
    BOOL _delegated;
    BOOL _activeAccount;
    ICUserIdentity *_userIdentity;
    NSString *_hashedDSID;
    NSUInteger _subscriptionCapabilities;
    NSString *_storeFrontIdentifier;
}

@property(nonatomic, getter=isActiveAccount) BOOL activeAccount; // @synthesize activeAccount=_activeAccount;
@property(nonatomic, getter=isDelegated) BOOL delegated; // @synthesize delegated=_delegated;
@property(copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(nonatomic) BOOL hasCloudLibraryEnabled; // @synthesize hasCloudLibraryEnabled=_hasCloudLibraryEnabled;
@property(readonly, nonatomic) NSUInteger subscriptionCapabilities; // @synthesize subscriptionCapabilities=_subscriptionCapabilities;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithUserIdentity:(id)arg1 subscriptionCapabilities:(NSUInteger)arg2;

@end

