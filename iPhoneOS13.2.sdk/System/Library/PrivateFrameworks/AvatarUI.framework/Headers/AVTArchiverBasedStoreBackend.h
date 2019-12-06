//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStoreBackend-Protocol.h>

@class AVTArchiverBasedStoreRoot, AVTCoreEnvironment, NSArray, NSDictionary, NSString, NSURL;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@interface AVTArchiverBasedStoreBackend : NSObject <AVTStoreBackend>
{
    NSURL *_storeLocation;
    NSString *_domainIdentifier;
    AVTCoreEnvironment *_environment;
    AVTArchiverBasedStoreRoot *_model;
    NSDictionary *_avatarsByIdentifiers;
    NSArray *_sortedAvatars;
}

+ (id)classifyRecordsByIdentifiers:(id)arg1;
+ (id)rootByRemovingAvatarWithIdentifier:(id)arg1 fromRoot:(id)arg2;
+ (id)rootBySavingAvatarRecord:(id)arg1 afterAvatarRecord:(id)arg2 forDomainIdentifier:(id)arg3 toRoot:(id)arg4;
+ (id)storeLocationForDomainIdentifier:(id)arg1 environment:(id)arg2;
@property(copy, nonatomic) NSArray *sortedAvatars; // @synthesize sortedAvatars=_sortedAvatars;
@property(copy, nonatomic) NSDictionary *avatarsByIdentifiers; // @synthesize avatarsByIdentifiers=_avatarsByIdentifiers;
@property(retain, nonatomic) AVTArchiverBasedStoreRoot *model; // @synthesize model=_model;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, copy, nonatomic) NSURL *storeLocation; // @synthesize storeLocation=_storeLocation;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id <AVTAvatarRecordChangeTracker> recordChangeTracker;
@property(nonatomic) __weak id <AVTStoreBackendDelegate> backendDelegate;
- (NSUInteger)avatarCountWithError:(id )arg1;
- (BOOL)saveModel:(id)arg1 logger:(id)arg2 error:(id )arg3;
- (BOOL)canCreateAvatarWithError:(id )arg1;
- (id)duplicateAvatarRecord:(id)arg1 error:(id )arg2;
- (BOOL)deleteAvatarWithIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)saveAvatar:(id)arg1 error:(id )arg2;
- (BOOL)saveAvatars:(id)arg1 error:(id )arg2;
- (id)avatarsExcludingIdentifiers:(id)arg1 error:(id )arg2;
- (id)avatarsWithIdentifiers:(id)arg1 error:(id )arg2;
- (id)allAvatars;
- (id)avatarsForFetchRequest:(id)arg1 error:(id )arg2;
- (void)loadModel:(id)arg1;
- (BOOL)loadContentFromDisk:(id )arg1;
- (BOOL)loadContentFromDiskIfNeeded:(id )arg1;
- (id)initWithStoreLocation:(id)arg1 domainIdentifier:(id)arg2 environment:(id)arg3;

@end

