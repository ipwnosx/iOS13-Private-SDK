//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>
#import <SecurityFoundation/_SFKeyAttributes-Protocol.h>

@class NSString, _SFKeySpecifier;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes>
{
    id _symmetricKeyAttributesInternal;
    NSString *persistentIdentifier;
}

@property(readonly, copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyDomain;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSpecifier:(id)arg1 domain:(NSString *)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

