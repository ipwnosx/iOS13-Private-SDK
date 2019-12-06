//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCSingleTagFeedGroupEmitter.h>

@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter
{
    BOOL _disableGroupMerging;
    BOOL _disableFiltering;
    BOOL _enableSingletonGroups;
}

@property(nonatomic) BOOL enableSingletonGroups; // @synthesize enableSingletonGroups=_enableSingletonGroups;
@property(nonatomic) BOOL disableFiltering; // @synthesize disableFiltering=_disableFiltering;
@property(nonatomic) BOOL disableGroupMerging; // @synthesize disableGroupMerging=_disableGroupMerging;
- (Class)classForGroupEmittingOperation;
- (BOOL)emitsSingletonGroups;
- (BOOL)canMergeGroupsUnconditionally;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

@end

