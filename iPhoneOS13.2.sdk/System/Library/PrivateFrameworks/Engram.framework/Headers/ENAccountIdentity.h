//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol ENAccountKey, ENDeviceKey;

@interface ENAccountIdentity : NSObject <NSSecureCoding>
{
    id <ENAccountKey> _accountKey;
    id <ENDeviceKey> _deviceKey;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id <ENDeviceKey> deviceKey; // @synthesize deviceKey=_deviceKey;
@property(retain, nonatomic) id <ENAccountKey> accountKey; // @synthesize accountKey=_accountKey;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2;

@end

