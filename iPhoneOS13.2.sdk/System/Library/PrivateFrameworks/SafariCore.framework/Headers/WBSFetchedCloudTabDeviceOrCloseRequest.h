//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString;

@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding>
{
    NSString *_uuidString;
    NSDictionary *_deviceOrCloseRequestDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *deviceOrCloseRequestDictionary; // @synthesize deviceOrCloseRequestDictionary=_deviceOrCloseRequestDictionary;
@property(readonly, copy, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDString:(id)arg1 deviceOrCloseRequestDictionary:(id)arg2;
- (id)init;

@end

