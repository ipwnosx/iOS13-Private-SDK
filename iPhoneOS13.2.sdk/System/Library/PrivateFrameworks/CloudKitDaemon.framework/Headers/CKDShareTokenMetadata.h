//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDShareTokenMetadata : NSObject <NSCopying>
{
    BOOL _forceDSRefetch;
    NSString *_routingKey;
    NSData *_shortSharingTokenData;
    NSData *_publicTokenData;
    NSData *_privateTokenData;
}

@property(retain, nonatomic) NSData *privateTokenData; // @synthesize privateTokenData=_privateTokenData;
@property(retain, nonatomic) NSData *publicTokenData; // @synthesize publicTokenData=_publicTokenData;
@property(nonatomic) BOOL forceDSRefetch; // @synthesize forceDSRefetch=_forceDSRefetch;
@property(retain, nonatomic) NSData *shortSharingTokenData; // @synthesize shortSharingTokenData=_shortSharingTokenData;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSData *shortSharingTokenHashData;
@property(readonly, nonatomic) NSString *shortSharingToken;
// - (id)copyWithZone:(_NSZone )arg1;

@end

