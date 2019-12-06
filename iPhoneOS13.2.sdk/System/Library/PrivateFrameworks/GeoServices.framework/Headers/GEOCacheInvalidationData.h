//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface GEOCacheInvalidationData : NSObject <NSSecureCoding>
{
    double _timestamp;
    double _ttl;
    unsigned int _version;
    NSArray *_versionDomains;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *versionDomains; // @synthesize versionDomains=_versionDomains;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (BOOL)_isKey:(id)arg1 subsetOf:(id)arg2;
- (BOOL)isInvalidatedByServiceVersion:(unsigned int)arg1 domains:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;

@end

