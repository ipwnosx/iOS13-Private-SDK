//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EDPersistenceDatabaseGenerationWindow, EMThreadObjectID, EMThreadScope, NSArray;

@protocol EDThreadChangeHookResponder <NSObject>

@optional
- (void)persistenceWillResetThreadScope:(EMThreadScope *)arg1 denyBlock:(void (^)(BOOL))arg2;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceIsDeletingThreadWithObjectID:(EMThreadObjectID *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsChangingThreadWithObjectID:(EMThreadObjectID *)arg1 changedKeyPaths:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(EMThreadObjectID *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsAddingThreadWithObjectID:(EMThreadObjectID *)arg1 journaled:(BOOL)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
@end

