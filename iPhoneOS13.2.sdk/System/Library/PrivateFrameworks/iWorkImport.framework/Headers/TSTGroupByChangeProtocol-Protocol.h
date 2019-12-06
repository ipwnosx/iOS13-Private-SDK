//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSTGroupNode;

@protocol TSTGroupByChangeProtocol
- (void)didChangeGroupByStructure;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e )arg1 fromGroup:(TSTGroupNode *)arg2;
- (void)didAddRowUID:(const UUIDData_5fbc143e )arg1 toGroup:(TSTGroupNode *)arg2;
- (void)didRemoveGroup:(TSTGroupNode *)arg1;
- (void)willRemoveGroup:(TSTGroupNode *)arg1;
- (void)didCreateGroup:(TSTGroupNode *)arg1;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
@end

