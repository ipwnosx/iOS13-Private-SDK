//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface VUIStoreAcquisitionProperties : NSObject <NSCopying>
{
    BOOL _ignoresForcedPasswordRestriction;
    NSString *_buyParams;
    NSString *_urlBagKey;
    NSString *_userAgent;
    NSNumber *_dsid;
    NSString *_strongToken;
}

+ (id)acquisitionPropertiesWithBuyParams:(id)arg1 urlbagKey:(id)arg2;
+ (id)metricsAugumentedBuyParamsWithBuyParams:(id)arg1;
@property(nonatomic) BOOL ignoresForcedPasswordRestriction; // @synthesize ignoresForcedPasswordRestriction=_ignoresForcedPasswordRestriction;
@property(copy, nonatomic) NSString *strongToken; // @synthesize strongToken=_strongToken;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *urlBagKey; // @synthesize urlBagKey=_urlBagKey;
@property(copy, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

