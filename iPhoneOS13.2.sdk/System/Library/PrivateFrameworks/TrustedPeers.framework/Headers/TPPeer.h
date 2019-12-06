//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSSet, NSString, TPPeerDynamicInfo, TPPeerPermanentInfo, TPPeerStableInfo;

@interface TPPeer : NSObject
{
    TPPeerPermanentInfo *_permanentInfo;
    TPPeerStableInfo *_stableInfo;
    TPPeerDynamicInfo *_dynamicInfo;
    NSData *_wrappedPrivateKeys;
}

@property(retain, nonatomic) NSData *wrappedPrivateKeys; // @synthesize wrappedPrivateKeys=_wrappedPrivateKeys;
@property(retain, nonatomic) TPPeerDynamicInfo *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(retain, nonatomic) TPPeerStableInfo *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(retain, nonatomic) TPPeerPermanentInfo *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSSet *trustedPeerIDs;
- (long long)updateDynamicInfo:(id)arg1;
- (long long)updateStableInfo:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPermanentInfo:(id)arg1;
@property(readonly, nonatomic) NSString *peerID;

@end

