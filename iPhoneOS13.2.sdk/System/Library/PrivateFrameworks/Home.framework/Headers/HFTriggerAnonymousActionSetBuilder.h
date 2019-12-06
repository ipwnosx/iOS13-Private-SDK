//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFActionSetBuilderProtocol-Protocol.h>

@class HFMediaPlaybackActionBuilder, HFMutableSetDiff, HMActionSet, HMTrigger, NSArray;

@interface HFTriggerAnonymousActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol>
{
    NSArray *_actions;
    HMTrigger *_containingTrigger;
    NSUInteger _actionSetType;
    HFMutableSetDiff *_actionBuilders;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFMutableSetDiff *actionBuilders; // @synthesize actionBuilders=_actionBuilders;
@property(nonatomic) NSUInteger actionSetType; // @synthesize actionSetType=_actionSetType;
@property(retain, nonatomic) HMTrigger *containingTrigger; // @synthesize containingTrigger=_containingTrigger;
// - (void).cxx_destruct;
- (id)_lazilyUpdateActions;
- (id)commitItem;
@property(readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property(readonly, nonatomic) BOOL requiresDeviceUnlock;
- (void)removeAllActions;
- (void)removeAction:(id)arg1;
- (void)updateAction:(id)arg1;
- (id)_existingActionBuilder:(id)arg1 inSet:(id)arg2;
- (void)updateActionBuildersDiff:(id)arg1;
- (void)addAction:(id)arg1;
- (void)addAction:(id)arg1 actionSetType:(NSUInteger)arg2;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)getOrCreateActionSet;
- (BOOL)hasActions;
@property(retain, nonatomic) HMActionSet *actionSet; // @dynamic actionSet;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

@end

