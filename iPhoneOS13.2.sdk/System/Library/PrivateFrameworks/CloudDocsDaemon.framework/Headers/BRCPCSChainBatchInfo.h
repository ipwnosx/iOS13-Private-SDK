//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject
{
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableDictionary *_halfChainedParentMap;
    BRCAppLibrary *_appLibrary;
}

// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *records;
@property(readonly, nonatomic) NSUInteger batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;
- (void)addFullyChainedRecordInfo:(id)arg1;
- (BOOL)containsRecordInfo:(id)arg1;
- (id)initWithAppLibrary:(id)arg1;

@end

