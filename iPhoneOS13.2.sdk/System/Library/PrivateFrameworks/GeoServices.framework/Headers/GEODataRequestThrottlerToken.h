//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding>
{
    double _createdAt;
//     CDStruct_d1a7ebee _kind;
    NSString *_bundleId;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)refresh;
// - (BOOL)isValidForRequest:(CDStruct_d1a7ebee)arg1 client:(id)arg2;
- (void)encodeWithXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)initWithRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2;
- (id)init;

@end

