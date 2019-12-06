//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPArtworkDataSource-Protocol.h>

@class MPCMediaRemoteController;

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource>
{
    MPCMediaRemoteController *_controller;
}

@property(readonly, nonatomic) __weak MPCMediaRemoteController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)initWithController:(id)arg1;

@end

