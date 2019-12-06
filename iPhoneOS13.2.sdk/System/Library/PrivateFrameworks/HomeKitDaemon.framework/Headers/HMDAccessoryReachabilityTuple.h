//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject
{
    BOOL _previouslySentReachability;
    BOOL _currentReachability;
    NSString *_accessoryUUID;
}

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(BOOL)arg2;
@property(nonatomic) BOOL currentReachability; // @synthesize currentReachability=_currentReachability;
@property(nonatomic) BOOL previouslySentReachability; // @synthesize previouslySentReachability=_previouslySentReachability;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

