//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement
{
    BOOL _pairingPresent;
    NSData *_setupHash;
}

@property(retain, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(readonly, nonatomic) BOOL pairingPresent; // @synthesize pairingPresent=_pairingPresent;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(BOOL)arg4 setupHash:(id)arg5;

@end

