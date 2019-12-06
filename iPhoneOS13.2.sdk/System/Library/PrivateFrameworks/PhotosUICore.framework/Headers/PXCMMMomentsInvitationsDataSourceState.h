//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, PHFetchResult;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_assetCollections;
    NSDictionary *_invitationsByAssetCollectionObjectID;
}

@property(readonly, nonatomic) NSDictionary *invitationsByAssetCollectionObjectID; // @synthesize invitationsByAssetCollectionObjectID=_invitationsByAssetCollectionObjectID;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
// - (void).cxx_destruct;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id )arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2;

@end

