//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CATRemoteConnectionSocketOptions : NSObject
{
    NSNumber *_adaptiveWriteTimeout;
    NSNumber *_keepAliveEnabled;
    NSNumber *_keepAliveDelay;
    NSNumber *_keepAliveInterval;
    NSNumber *_keepAliveCount;
    NSNumber *_netServiceType;
}

@property(copy, nonatomic) NSNumber *netServiceType; // @synthesize netServiceType=_netServiceType;
@property(copy, nonatomic) NSNumber *keepAliveCount; // @synthesize keepAliveCount=_keepAliveCount;
@property(copy, nonatomic) NSNumber *keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(copy, nonatomic) NSNumber *keepAliveDelay; // @synthesize keepAliveDelay=_keepAliveDelay;
@property(copy, nonatomic) NSNumber *keepAliveEnabled; // @synthesize keepAliveEnabled=_keepAliveEnabled;
@property(copy, nonatomic) NSNumber *adaptiveWriteTimeout; // @synthesize adaptiveWriteTimeout=_adaptiveWriteTimeout;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

