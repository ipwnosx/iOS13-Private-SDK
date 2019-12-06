//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIViewController, _WDActivityNode;

__attribute__((visibility("hidden")))
@interface WDUserActivityManager : NSObject
{
    UIViewController *_rootViewController;
    _WDActivityNode *_topNode;
    _WDActivityNode *_currentNode;
    NSMutableDictionary *_indexedActivities;
    BOOL _recordActivities;
    NSMutableArray *_policies;
}

@property(readonly, nonatomic) NSMutableArray *policies; // @synthesize policies=_policies;
@property(nonatomic) BOOL recordActivities; // @synthesize recordActivities=_recordActivities;
// - (void).cxx_destruct;
- (BOOL)_restoreActivityFromPolicies:(id)arg1;
- (void)addPolicy:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_setCurrentNodeToResponder:(id)arg1;
- (void)_restoreFromActivityChain:(id)arg1;
- (void)_userActivityWithTitle:(id)arg1 keywords:(id)arg2 activityType:(id)arg3;
- (id)_userActivityWithType:(id)arg1;
- (void)_resetActivities;
- (void)restoreFromUserActivity:(id)arg1;
- (id)_castleRockSpotlightBreadcrumbs:(id)arg1;
- (id)_handoffActivityBreadcrumbsForOnboarding:(id)arg1;
- (id)_handoffActivityBreadcrumbsForSampleType:(id)arg1;
- (void)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;
- (void)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 title:(id)arg3 keywords:(id)arg4;
- (void)setRootViewController:(id)arg1;
- (id)init;

@end

