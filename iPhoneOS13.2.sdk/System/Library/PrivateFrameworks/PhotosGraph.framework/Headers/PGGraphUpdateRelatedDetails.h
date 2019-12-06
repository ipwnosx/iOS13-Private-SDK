//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface PGGraphUpdateRelatedDetails : NSObject
{
    NSMutableSet *_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
    NSMutableSet *_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
}

@property(retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons; // @synthesize accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons=_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
@property(retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons; // @synthesize accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons=_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
// - (void).cxx_destruct;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2;
- (void)accumulateDetailsForDeletedPersonNodes:(id)arg1;
- (void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
- (id)init;

@end

