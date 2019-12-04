//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFActionProviderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface WFActionRegistry : NSObject <WFActionProviderDelegate>
{
    unsigned long long _state;
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
@property(readonly, copy) NSString *description;
- (void)actionProviderDidChange:(id)arg1 updatedActions:(id)arg2 removedActions:(id)arg3 addedActions:(id)arg4;
- (void)addActions:(id)arg1 fromActionProvider:(id)arg2;
- (void)removeActionsWithIdentifiers:(id)arg1 fromActionProvider:(id)arg2;
- (void)setActions:(id)arg1 forProvider:(id)arg2;
- (void)updateCacheWithCompletion:(id /* block */)arg1;
- (void)fillActionProviders:(id)arg1;
- (void)updateCachesAndFill;
- (void)fill;
- (id)actionsForAppWithIdentifier:(id)arg1;
- (id)actionsForCategory:(id)arg1;
@property(readonly, nonatomic) NSSet *categories;
@property(readonly, nonatomic) NSSet *actions;
- (id)createActionsWithIdentifiers:(id)arg1 serializedParameterArray:(id)arg2;
- (id)createActionWithIdentifier:(id)arg1 serializedParameters:(id)arg2;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)init;
- (id)createActionWithShortcut:(id)arg1 error:(id *)arg2;
- (id)handleIntentActionForDonatedIntent:(id)arg1;
- (id)createActionWithDonation:(id)arg1;
- (id)updatedActionForResidentCompatibility:(id)arg1 inHome:(id)arg2;
- (id)residentCompatibleActionsFromActions:(id)arg1 inHome:(id)arg2;
- (id)suggestionsForHome:(id)arg1 includingRelatedActions:(_Bool)arg2;
- (id)residentBasedActionsForHome:(id)arg1 residentCompatible:(_Bool)arg2;
- (id)residentCompatibleActionsForCategory:(id)arg1 home:(id)arg2;
- (id)residentCompatibleActionsForHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
