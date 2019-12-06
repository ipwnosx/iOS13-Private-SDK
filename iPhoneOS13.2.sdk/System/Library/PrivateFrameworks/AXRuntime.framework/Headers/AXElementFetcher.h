//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary;
@protocol AXElementFetcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXElementFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    NSObject<OS_dispatch_queue> *_filterAccessQueue;
//    struct __AXObserver _axRuntimeNotificationObserver;
    NSUInteger _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    AXElementGroupPruner *_elementGroupPruner;
    BOOL _enabled;
    BOOL _fetchingElements;
    BOOL _eventManagementEnabled;
    BOOL _shouldIncludeNonScannerElements;
    BOOL _groupingEnabled;
    BOOL _didSendFakeScreenChangeOnLastFetch;
    long long _elementGroupingHeuristics;
    id <AXElementFetcherDelegate> _delegate;
    NSMapTable *_fetchObservers;
    NSUInteger _activeFetchEvents;
    NSArray *_currentApps;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    NSMutableDictionary *_postFetchFilters;
    AXVisualElementGrouper *_visualElementGrouper;
    NSArray *_customCurrentApps;
}

+ (id)springBoardElement;
+ (id)systemWideElement;
@property(retain, nonatomic) NSArray *customCurrentApps; // @synthesize customCurrentApps=_customCurrentApps;
@property(nonatomic) BOOL didSendFakeScreenChangeOnLastFetch; // @synthesize didSendFakeScreenChangeOnLastFetch=_didSendFakeScreenChangeOnLastFetch;
@property(retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // @synthesize visualElementGrouper=_visualElementGrouper;
@property(retain, nonatomic) NSMutableDictionary *postFetchFilters; // @synthesize postFetchFilters=_postFetchFilters;
@property(retain, nonatomic) AXElementGroup *keyboardGroupCache; // @synthesize keyboardGroupCache=_keyboardGroupCache;
@property(retain, nonatomic) AXElementGroup *rootGroupCache; // @synthesize rootGroupCache=_rootGroupCache;
@property(retain, nonatomic) NSArray *elementCache; // @synthesize elementCache=_elementCache;
@property(retain, nonatomic) NSArray *currentApps; // @synthesize currentApps=_currentApps;
@property(nonatomic) NSUInteger activeFetchEvents; // @synthesize activeFetchEvents=_activeFetchEvents;
@property(retain, nonatomic) NSMapTable *fetchObservers; // @synthesize fetchObservers=_fetchObservers;
@property(nonatomic) __weak id <AXElementFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long elementGroupingHeuristics; // @synthesize elementGroupingHeuristics=_elementGroupingHeuristics;
@property(nonatomic, getter=isGroupingEnabled) BOOL groupingEnabled; // @synthesize groupingEnabled=_groupingEnabled;
@property(nonatomic) BOOL shouldIncludeNonScannerElements; // @synthesize shouldIncludeNonScannerElements=_shouldIncludeNonScannerElements;
@property(nonatomic, getter=isEventManagementEnabled) BOOL eventManagementEnabled; // @synthesize eventManagementEnabled=_eventManagementEnabled;
@property(nonatomic, getter=isFetchingElements) BOOL fetchingElements; // @synthesize fetchingElements=_fetchingElements;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
// - (void).cxx_destruct;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(NSUInteger)arg1;
- (void)clearCache;
- (BOOL)_fetchGroups:(BOOL)arg1;
- (id)_fetchUnprocessedAppGroups;
- (id)_processAppGroup:(id)arg1 keyboardGroup:(id )arg2;
@property(readonly, nonatomic) AXElementGroupPruner *elementGroupPruner;
- (id)_filterGroup:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(NSUInteger)arg2 scanningBehaviorTraits:(NSUInteger)arg3 label:(id)arg4 identifier:(id)arg5 currentPid:(int)arg6;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)findGroupableMatchingBlock:(CDUnknownBlockType)arg1;
- (id)_findGroupableMatchingBlock:(CDUnknownBlockType)arg1 inElementGroup:(id)arg2;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(BOOL )arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(BOOL )arg2;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(BOOL )arg3;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(BOOL )arg2;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(BOOL )arg2;
- (id)lastElement;
- (id)firstElement;
- (id)closestElementToPoint:(CGPoint)arg1;
- (id)closestElementToElement:(id)arg1;
- (id)_findElementsMatchingBlock:(CDUnknownBlockType)arg1 internalRequest:(BOOL)arg2;
- (id)findElementsMatchingBlock:(CDUnknownBlockType)arg1;
- (id)findElementMatchingBlock:(CDUnknownBlockType)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)_filterElements:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (void)removeAllPostFetchFilters;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)addPostFetchFilter:(CDUnknownBlockType)arg1 withIdentifier:(id)arg2;
- (id)_fetchUnprocessedElements;
- (BOOL)_fetchElements:(BOOL)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(BOOL)arg3;
- (BOOL)_shouldConsiderCacheAsInvalid;
- (void)disableEventManagement;
- (void)enableEventManagement;
- (id)_axNotificationsForManagedEvents;
- (BOOL)_fetchEventCanBeManaged:(NSUInteger)arg1;
- (long long)_priorityForFetchEvent:(NSUInteger)arg1;
- (double)_delayForFetchEvent:(NSUInteger)arg1;
- (void)_scheduleFetchEvent:(NSUInteger)arg1;
- (void)_tearDownEventCoalesceTimer;
//  (void)_handleMediaDidBegin:(struct __CFData )arg1;
//  (void)_handleScreenWillChange:(struct __CFData )arg1;
- (void)_handleApplicationWasActivated:(id)arg1;
//  (void)_handleUpdateElementVisuals:(struct __CFData )arg1;
//  (void)_handleNativeFocusItemDidChange:(struct __CFData )arg1;
- (void)_fetchEventOccurred:(NSUInteger)arg1;
- (void)fetchEventOccurred:(NSUInteger)arg1;
- (void)refresh;
- (void)removeFetchEvents:(NSUInteger)arg1;
- (void)addFetchEvents:(NSUInteger)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(NSUInteger)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(NSUInteger)arg1 foundNewElements:(BOOL)arg2;
//  (void)_notifyObserversMediaDidBegin:(struct __CFData )arg1;
//  (void)_notifyObserversScreenWillChange:(struct __CFData )arg1;
- (void)_notifyObserversApplicationWasActivated:(id)arg1;
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(NSUInteger)arg1;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
@property(readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *keyboardGroup;
@property(readonly, nonatomic) AXElementGroup *rootGroup;
@property(readonly, nonatomic) NSArray *availableElements;
@property(readonly, nonatomic) BOOL willFetchElements;
- (BOOL)_updateCurrentApps;
@property(readonly, nonatomic) AXElement *nativeFocusElement;
- (void)_setCurrentApplications:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fetchEvents:(NSUInteger)arg2 enableEventManagement:(BOOL)arg3 enableGrouping:(BOOL)arg4 shouldIncludeNonScannerElements:(BOOL)arg5 beginEnabled:(BOOL)arg6;

@end

