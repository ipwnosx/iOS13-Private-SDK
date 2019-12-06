//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject
{
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_globalTransitions;
    PFStateMachineNode *_initialNode;
}

@property(retain) PFStateMachineNode *initialNode; // @synthesize initialNode=_initialNode;
// - (void).cxx_destruct;
- (id)dot:(BOOL)arg1;
- (id)findNodeWithName:(id)arg1;
- (id)transitionForEventName:(id)arg1;
- (void)addGlobalTransitionOn:(id)arg1 to:(id)arg2;
- (void)addGlobalTransition:(id)arg1;
- (id)addNode:(id)arg1;
- (id)init;

@end

