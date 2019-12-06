//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface RBLaunchdJobRegistry : NSObject
{
//    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_identityToJobMap;
}

+ (BOOL)_deleteJobLabel:(id)arg1 error:(out id )arg2;
+ (BOOL)_submitJob:(id)arg1 error:(out id )arg2;
+ (void)_queryJobsWithBlock:(CDUnknownBlockType)arg1;
// - (void).cxx_destruct;
- (BOOL)deleteJob:(id)arg1 error:(out id )arg2;
- (id)createJobIfNecessaryForIdentity:(id)arg1 withContext:(id)arg2 error:(out id )arg3;
- (id)jobForIdentifier:(id)arg1;
- (id)jobForIdentity:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *jobs;
- (id)synchronizeJobs;
- (id)init;

@end

