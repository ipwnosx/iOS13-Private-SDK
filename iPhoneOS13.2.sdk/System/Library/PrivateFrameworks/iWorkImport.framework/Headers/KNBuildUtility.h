//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface KNBuildUtility : NSObject
{
}

+ (NSUInteger)countOfInfosThatSupportContentBuilds:(id)arg1;
+ (id)validIdentifierForChunkToInsertAfterFromPossiblyInvalidIdentifier:(id)arg1 build:(id)arg2;
+ (id)nonNilChunkIdentifierFromPossiblyNilChunk:(id)arg1;
+ (id)identifiersForChunks:(id)arg1;
+ (id)UUIDToTSPObjectMapForTSPObjects:(id)arg1;
+ (id)buildUUIDToChunkIdentifiersMapForChunkIdentifiers:(id)arg1;
+ (id)buildsToChunksMapForBuilds:(id)arg1 chunks:(id)arg2;
+ (id)buildsToChunksMapForChunks:(id)arg1;
+ (id)orderedBuildsFromUnorderedBuilds:(id)arg1;
+ (id)chunksForInfos:(id)arg1;
+ (id)uniqueBuildsOrderedByChunks:(id)arg1;
+ (id)buildsForChunks:(id)arg1;
+ (id)chunksInBuilds:(id)arg1;
+ (BOOL)animationInfo:(id)arg1 onInfo:(id)arg2 canRunSimultaneouslyWithAnimationInfo:(id)arg3 onInfo:(id)arg4;
+ (long long)sharedAnimationTypeForBuilds:(id)arg1;
+ (long long)sharedAnimationTypeForBuildChunks:(id)arg1;

@end

