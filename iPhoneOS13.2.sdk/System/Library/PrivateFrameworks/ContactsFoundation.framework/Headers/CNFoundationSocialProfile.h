//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying>
{
    NSString *_urlString;
    NSString *_username;
    NSString *_userIdentifier;
    NSString *_service;
    NSString *_displayName;
}

+ (id)emptySocialProfile;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *urlString; // @synthesize urlString=_urlString;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isEmpty;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayName:(id)arg5;

@end

