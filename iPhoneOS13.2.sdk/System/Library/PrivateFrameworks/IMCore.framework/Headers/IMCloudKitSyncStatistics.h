//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMCloudKitSyncStatistics : NSObject
{
    NSUInteger _syncedChatCount;
    NSUInteger _totalChatCount;
    NSUInteger _syncedAttachmentCount;
    NSUInteger _totalAttachmentCount;
    NSUInteger _syncedMessageCount;
    NSUInteger _totalMessageCount;
    NSUInteger _totalRecordCount;
    NSUInteger _syncedRecordCount;
}

+ (id)percentStringFromTotal:(double)arg1 count:(double)arg2;
+ (id)percentStringFromDouble:(double)arg1;
+ (double)calculatePercentageOfTotal:(double)arg1 count:(double)arg2;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(NSUInteger)arg1 syncType:(long long)arg2 count:(double)arg3 max:(double)arg4;
+ (id)_createSyncStatisticsDictionary:(long long)arg1 messageSyncCount:(long long)arg2 chatCount:(long long)arg3 chatSyncCount:(long long)arg4 attachmentCount:(long long)arg5 attachmentSyncCount:(long long)arg6;
@property(nonatomic) NSUInteger syncedRecordCount; // @synthesize syncedRecordCount=_syncedRecordCount;
@property(nonatomic) NSUInteger totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;
@property(nonatomic) NSUInteger totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) NSUInteger syncedMessageCount; // @synthesize syncedMessageCount=_syncedMessageCount;
@property(nonatomic) NSUInteger totalAttachmentCount; // @synthesize totalAttachmentCount=_totalAttachmentCount;
@property(nonatomic) NSUInteger syncedAttachmentCount; // @synthesize syncedAttachmentCount=_syncedAttachmentCount;
@property(nonatomic) NSUInteger totalChatCount; // @synthesize totalChatCount=_totalChatCount;
@property(nonatomic) NSUInteger syncedChatCount; // @synthesize syncedChatCount=_syncedChatCount;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)_statsString:(id)arg1 count:(long long)arg2 total:(long long)arg3;
@property(readonly, nonatomic) double percentSynced;
- (id)initWithStatisticsDictionary:(id)arg1;
- (id)_syncStatisticsDictionary;

@end

