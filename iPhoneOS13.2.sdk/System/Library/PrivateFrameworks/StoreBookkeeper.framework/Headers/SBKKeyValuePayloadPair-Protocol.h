//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString;

@protocol SBKKeyValuePayloadPair <NSObject, NSSecureCoding>
+ (id)pairWithKVSKey:(NSString *)arg1 kvsPayload:(NSData *)arg2;
- (id)kvsValueDescription;
- (double)timestamp;
- (NSData *)kvsPayload;
- (NSString *)kvsKey;
@end

