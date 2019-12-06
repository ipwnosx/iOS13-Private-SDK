//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
{
}

+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingUniqueCollections;
+ (id)propertiesForGroupingKey;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (BOOL)propertyIsCountProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)defaultOrderingTerms;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
+ (id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
- (void)updateTrackValues:(id)arg1;
- (id)protocolItem;
- (id)multiverseIdentifier;

@end

