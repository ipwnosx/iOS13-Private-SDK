//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CLSocket, NSDate, NSString, NSURL;

@interface CLAccount : NSObject <NSCopying, NSCoding>
{
    NSURL *_domain;
    NSURL *_domainHomePage;
    BOOL _alphaUser;
    BOOL _uploadsArePrivate;
    NSString *_email;
    NSDate *_subscriptionExpiresAt;
    long long _type;
    CLSocket *_socket;
}

+ (id)accountWithEmail:(id)arg1;
@property(retain, nonatomic) CLSocket *socket; // @synthesize socket=_socket;
@property(nonatomic, getter=isAlphaUser) BOOL alphaUser; // @synthesize alphaUser=_alphaUser;
@property(retain, nonatomic) NSURL *domainHomePage; // @synthesize domainHomePage=_domainHomePage;
@property(retain, nonatomic) NSURL *domain; // @synthesize domain=_domain;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *subscriptionExpiresAt; // @synthesize subscriptionExpiresAt=_subscriptionExpiresAt;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) BOOL uploadsArePrivate; // @synthesize uploadsArePrivate=_uploadsArePrivate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithEmail:(id)arg1;
- (id)init;

@end

