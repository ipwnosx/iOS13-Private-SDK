//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLSearchResult.h>

@class NSDate, NSString, PSICollectionResult, PSIDate;

@interface PLCollectionSearchResult : PLSearchResult
{
    PSICollectionResult *_collectionResult;
}

@property(readonly, nonatomic) PSICollectionResult *collectionResult; // @synthesize collectionResult=_collectionResult;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger collectionType;
@property(readonly, nonatomic) PSIDate *endDate;
@property(readonly, nonatomic) PSIDate *startDate;
@property(readonly, nonatomic) NSDate *sortDate;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (NSUInteger)assetCount;
- (id)keyAssetUUID;
- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2;
- (NSUInteger)type;

@end

