//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NFCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol FCContentContext, FCTodayPrivateData, NTSectionDescriptor, NTTodayItem, NTTodayResultOperationInfoProviding;

@protocol NTTodayProtoitem <NFCopying>
@property(readonly, copy, nonatomic) NSString *identifier;
- (id <NTTodayItem>)itemWithContentContext:(id <FCContentContext>)arg1 operationInfo:(id <NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id <NTSectionDescriptor>)arg3 todayData:(id <FCTodayPrivateData>)arg4 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg5 forLeadingCellAppearance:(BOOL)arg6 preferredDynamicSlotAllocation:(NSUInteger)arg7;
- (NSArray *)assetHandlesWithOperationInfo:(id <NTTodayResultOperationInfoProviding>)arg1 forLeadingCellAppearance:(BOOL)arg2;
@end

