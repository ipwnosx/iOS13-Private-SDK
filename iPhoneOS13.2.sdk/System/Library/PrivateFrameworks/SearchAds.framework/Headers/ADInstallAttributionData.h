//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ADInstallAttributionData : NSObject
{
    NSString *_adNetworkID;
    NSNumber *_campaignID;
    NSString *_uuid;
    NSNumber *_adamID;
    NSNumber *_timestamp;
    NSString *_signature;
}

@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSNumber *campaignID; // @synthesize campaignID=_campaignID;
@property(readonly, copy, nonatomic) NSString *adNetworkID; // @synthesize adNetworkID=_adNetworkID;
// - (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

