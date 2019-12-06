//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface UNSPushRegistration : NSObject <NSCopying>
{
    NSString *_environment;
    NSData *_token;
    NSString *_tokenIdentifier;
}

+ (id)pushRegistrationWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3;
@property(readonly, copy, nonatomic) NSString *tokenIdentifier; // @synthesize tokenIdentifier=_tokenIdentifier;
@property(readonly, copy, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3;

@end

