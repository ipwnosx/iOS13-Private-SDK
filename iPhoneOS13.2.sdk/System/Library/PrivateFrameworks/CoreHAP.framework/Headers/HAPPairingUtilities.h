//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
{
}

+ (id)parseListPairingsResponse:(id)arg1 error:(id )arg2;
+ (id)createListPairingsRequest:(id )arg1;
+ (BOOL)parseRemovePairingResponse:(id)arg1 error:(id )arg2;
+ (id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id )arg2;
+ (BOOL)parseAddPairingResponse:(id)arg1 error:(id )arg2;
+ (id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id )arg2;

@end

