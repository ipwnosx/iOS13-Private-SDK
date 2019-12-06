//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface ICStorePlatformMetadata : NSObject
{
    NSDate *_expirationDate;
    NSDictionary *_metadataDictionary;
}

+ (id)storeServerCalendar;
@property(readonly, copy, nonatomic) NSDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
// - (void).cxx_destruct;
- (id)_storePlatformReleaseDateFormatter;
@property(readonly, copy, nonatomic) NSArray *artworkInfos;
@property(readonly, copy, nonatomic) NSString *workName;
@property(readonly, nonatomic) long long trackCount;
@property(readonly, nonatomic) long long trackNumber;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSArray *formerStoreAdamIDs;
@property(readonly, nonatomic) long long storeAdamID;
@property(readonly, nonatomic) BOOL shouldShowComposer;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSString *radioStationStringID;
- (id)offerWithType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *offers;
@property(readonly, copy, nonatomic) NSString *playlistGlobalID;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) long long movementNumber;
@property(readonly, copy, nonatomic) NSString *movementName;
@property(readonly, nonatomic) long long movementCount;
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, nonatomic) BOOL hasTimeSyncedLyrics;
@property(readonly, nonatomic) BOOL hasLyrics;
@property(readonly, copy, nonatomic) NSArray *genreNames;
@property(readonly, nonatomic) long long explicitRating;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long discNumber;
@property(readonly, copy, nonatomic) NSString *copyrightText;
@property(readonly, copy, nonatomic) NSString *composerName;
@property(readonly, nonatomic) long long collectionStoreAdamID;
@property(readonly, copy, nonatomic) NSString *collectionName;
@property(readonly, copy, nonatomic) NSString *cloudUniversalLibraryID;
@property(readonly, nonatomic) long long artistStoreAdamID;
@property(readonly, copy, nonatomic) NSString *artistName;
- (id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)initWithMetadataDictionary:(id)arg1;

@end

