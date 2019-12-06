//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>


@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding>
{
    long long _purgedSize;
    NSArray *_purgedApps;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *purgedApps; // @synthesize purgedApps=_purgedApps;
@property(readonly, nonatomic) long long purgedSize; // @synthesize purgedSize=_purgedSize;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2;
- (id)init;

@end

