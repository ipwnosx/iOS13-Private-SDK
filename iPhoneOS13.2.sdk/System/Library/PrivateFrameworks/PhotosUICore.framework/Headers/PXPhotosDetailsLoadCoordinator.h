//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface PXPhotosDetailsLoadCoordinator : NSObject
{
    NSHashTable *__tokens;
    NSMutableArray *__relatedBlocks;
    NSMutableArray *__suggestionsBlocks;
    double _timeoutDelay;
}

+ (id)loadCoordinatorForContext:(id)arg1;
@property(nonatomic) double timeoutDelay; // @synthesize timeoutDelay=_timeoutDelay;
@property(readonly, nonatomic) NSMutableArray *_suggestionsBlocks; // @synthesize _suggestionsBlocks=__suggestionsBlocks;
@property(readonly, nonatomic) NSMutableArray *_relatedBlocks; // @synthesize _relatedBlocks=__relatedBlocks;
@property(readonly, nonatomic) NSHashTable *_tokens; // @synthesize _tokens=__tokens;
// - (void).cxx_destruct;
- (BOOL)_canPerformSuggestionsFetch;
- (BOOL)_canPerformRelatedFetch;
- (void)_tokenDidComplete:(id)arg1;
- (void)performBlockWhenReadyToFetchSuggestions:(CDUnknownBlockType)arg1;
- (void)performBlockWhenReadyToFetchRelated:(CDUnknownBlockType)arg1;
- (id)tokenForLivePhotoVariations;
- (id)tokenForCuratedFetch;
- (id)_createToken;
- (id)init;

@end

