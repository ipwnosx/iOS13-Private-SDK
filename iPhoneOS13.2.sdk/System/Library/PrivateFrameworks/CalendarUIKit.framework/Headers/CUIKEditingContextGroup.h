//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIKObjectGroup, EKEventStore, NSMutableArray, NSNumber, NSSet;

@interface CUIKEditingContextGroup : NSObject
{
    CUIKObjectGroup *_objectGroup;
    NSSet *_openContexts;
    EKEventStore *_eventStore;
    NSMutableArray *_additionalObjectGroups;
    NSNumber *_spanDecisionAsNumber;
    NSNumber *_earlyCommitDecisionAsNumber;
}

@property(retain) NSNumber *earlyCommitDecisionAsNumber; // @synthesize earlyCommitDecisionAsNumber=_earlyCommitDecisionAsNumber;
@property(retain) NSNumber *spanDecisionAsNumber; // @synthesize spanDecisionAsNumber=_spanDecisionAsNumber;
@property(retain) NSMutableArray *additionalObjectGroups; // @synthesize additionalObjectGroups=_additionalObjectGroups;
@property __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain) NSSet *openContexts; // @synthesize openContexts=_openContexts;
@property(retain) CUIKObjectGroup *objectGroup; // @synthesize objectGroup=_objectGroup;
// - (void).cxx_destruct;

@end

