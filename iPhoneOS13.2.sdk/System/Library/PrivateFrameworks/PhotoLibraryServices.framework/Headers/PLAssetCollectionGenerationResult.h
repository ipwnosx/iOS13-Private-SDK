//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject
{
    BOOL _frequentLocationsDidChange;
    NSSet *_insertedOrUpdatedMoments;
}

@property(readonly, nonatomic) BOOL frequentLocationsDidChange; // @synthesize frequentLocationsDidChange=_frequentLocationsDidChange;
@property(readonly, nonatomic) NSSet *insertedOrUpdatedMoments; // @synthesize insertedOrUpdatedMoments=_insertedOrUpdatedMoments;
// - (void).cxx_destruct;
- (id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(BOOL)arg2;

@end

