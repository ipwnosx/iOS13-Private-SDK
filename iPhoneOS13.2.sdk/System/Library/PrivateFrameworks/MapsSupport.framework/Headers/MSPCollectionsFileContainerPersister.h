//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPFileContainerPersister.h>

@interface MSPCollectionsFileContainerPersister : MSPFileContainerPersister
{
}

- (id)stateSnapshotFromData:(id)arg1;
- (BOOL)getSnapshot:(out id )arg1 data:(out id )arg2 mergingCurrentState:(id)arg3 withState:(id)arg4 mergeOptions:(id)arg5 error:(out id )arg6;
- (BOOL)getSnapshot:(out id )arg1 data:(out id )arg2 forNewContents:(id)arg3 edits:(id)arg4 appliedToOldContents:(id)arg5 error:(out id )arg6;

@end

