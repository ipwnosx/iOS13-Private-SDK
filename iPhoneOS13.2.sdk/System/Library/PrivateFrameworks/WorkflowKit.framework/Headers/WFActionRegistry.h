//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFActionProviderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface WFActionRegistry : NSObject <WFActionProviderDelegate>
{
    NSUInteger _state;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
    NSObject<OS_dispatch_queue> *_cacheUpdateAndFillQueue;
    NSArray *_actionProvidersForFilling;
    NSArray *_actionProvidersForLoading;
    NSDictionary *_actionsByIdentifier;
    NSMapTable *_actionsByActionProvider;
    NSDictionary *_actionsByCategory;
}

+ (id)sharedRegistry;
@property(readonly, nonatomic) NSDictionary *actionsByCategory; // @synthesize actionsByCategory=_actionsByCategory;
@property(readonly, nonatomic) NSMapTable *actionsByActionProvider; // @synthesize actionsByActionProvider=_actionsByActionProvider;
@property(readonly, nonatomic) NSDictionary *actionsByIdentifier; // @synthesize actionsByIdentifier=_actionsByIdentifier;
@property(readonly, nonatomic) NSArray *actionProvidersForLoading; // @synthesize actionProvidersForLoading=_actionProvidersForLoading;
@property(readonly, nonatomic) NSArray *actionProvidersForFilling; // @synthesize actionProvidersForFilling=_actionProvidersForFilling;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue; // @synthesize cacheUpdateAndFillQueue=_cacheUpdateAndFillQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)actionProviderDidChange:(id)arg1 updatedActions:(id)arg2 removedActions:(id)arg3 addedActions:(id)arg4;
- (void)addActions:(id)arg1 fromActionProvider:(id)arg2;
- (void)removeActionsWithIdentifiers:(id)arg1 fromActionProvider:(id)arg2;
- (void)setActions:(id)arg1 forProvider:(id)arg2;
- (void)updateCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)fillActionProviders:(id)arg1;
- (void)updateCachesAndFill;
- (void)fill;
- (id)actionsForAppWithIdentifier:(id)arg1;
- (id)actionsForCategory:(id)arg1;
@property(readonly, nonatomic) NSSet *categories;
@property(readonly, nonatomic) NSSet *actions;
- (id)createActionsWithIdentifiers:(id)arg1 serializedParameterArray:(id)arg2;
- (id)createActionWithIdentifier:(id)arg1 serializedParameters:(id)arg2;
@property(readonly, nonatomic) NSUInteger state; // @synthesize state=_state;
- (id)init;
- (id)createActionWithShortcut:(id)arg1 error:(id )arg2;
- (id)handleIntentActionForDonatedIntent:(id)arg1;
- (id)createActionWithDonation:(id)arg1;
- (id)updatedActionForResidentCompatibility:(id)arg1 inHome:(id)arg2;
- (id)residentCompatibleActionsFromActions:(id)arg1 inHome:(id)arg2;
- (id)suggestionsForHome:(id)arg1 includingRelatedActions:(BOOL)arg2;
- (id)residentBasedActionsForHome:(id)arg1 residentCompatible:(BOOL)arg2;
- (id)residentCompatibleActionsForCategory:(id)arg1 home:(id)arg2;
- (id)residentCompatibleActionsForHome:(id)arg1;

@end

