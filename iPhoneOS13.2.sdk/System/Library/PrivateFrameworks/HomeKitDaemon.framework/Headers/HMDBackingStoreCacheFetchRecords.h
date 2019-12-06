//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation
{
    BOOL _recursive;
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    id /* CDUnknownBlockType */ _fetchResult;
    NSArray *_recordNames;
    NSArray *_uuids;
    NSArray *_parentUuids;
}

@property(retain, nonatomic) NSArray *parentUuids; // @synthesize parentUuids=_parentUuids;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property BOOL recursive; // @synthesize recursive=_recursive;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithShareGroup:(id)arg1 records:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithShareGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;

@end

