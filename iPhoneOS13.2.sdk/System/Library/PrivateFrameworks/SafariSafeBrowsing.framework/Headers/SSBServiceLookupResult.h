//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding>
{
    struct LookupResult _lookupResult;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
@property(readonly, nonatomic) NSString *provider;
@property(readonly, nonatomic, getter=isKnownToBeUnsafe) _Bool knownToBeUnsafe;
@property(readonly, nonatomic, getter=isUnwantedSoftware) _Bool unwantedSoftware;
@property(readonly, nonatomic, getter=isPhishing) _Bool phishing;
@property(readonly, nonatomic, getter=isMalware) _Bool malware;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithLookupResult:(struct LookupResult)arg1;

@end
