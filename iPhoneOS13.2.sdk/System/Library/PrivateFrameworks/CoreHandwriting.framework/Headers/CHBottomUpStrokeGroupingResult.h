//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult
{
    NSDictionary *_substrokePlacementsByStrokeIdentifier;
}

@property(readonly, retain, nonatomic) NSDictionary *substrokePlacementsByStrokeIdentifier; // @synthesize substrokePlacementsByStrokeIdentifier=_substrokePlacementsByStrokeIdentifier;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokePlacementsByStrokeIdentifier:(id)arg4;

@end

