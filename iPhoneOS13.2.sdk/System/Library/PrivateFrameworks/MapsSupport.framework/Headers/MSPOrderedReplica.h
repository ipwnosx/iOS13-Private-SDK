//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplica.h>

@interface MSPOrderedReplica : MSPReplica
{
}

+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditPosition:(CDUnknownBlockType)arg4 caseIsRemoveTombstone:(CDUnknownBlockType)arg5;
+ (id)allowedEditClasses;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)orderedReplicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id )arg6;
- (BOOL)_containerSerializationRequiresTrackingPositionEdits;

@end

