//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>


@class HMDHome;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>
{
    NSUInteger _userPrivilege;
    BOOL _requiresRemoteAccess;
    BOOL _requiresCameraStreamingAccess;
    HMDHome *_home;
}

@property(readonly) BOOL requiresCameraStreamingAccess; // @synthesize requiresCameraStreamingAccess=_requiresCameraStreamingAccess;
@property(readonly) BOOL requiresRemoteAccess; // @synthesize requiresRemoteAccess=_requiresRemoteAccess;
@property(readonly) NSUInteger userPrivilege; // @synthesize userPrivilege=_userPrivilege;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithHome:(id)arg1 userPrivilege:(NSUInteger)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4;
- (id)initWithHome:(id)arg1 userPrivilege:(NSUInteger)arg2 remoteAccessRequired:(BOOL)arg3;
- (id)init;

@end

