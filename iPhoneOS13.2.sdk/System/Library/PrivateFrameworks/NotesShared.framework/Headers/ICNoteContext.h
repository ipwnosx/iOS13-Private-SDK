//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICManagedObjectContextUpdaterDelegate-Protocol.h>
#import <NotesShared/ICNoteContainer-Protocol.h>

@class ICAccount, ICAccountUtilities, ICFolderCustomNoteSortType, ICManagedObjectContextUpdater, ICNote, ICNotesCrossProcessChangeCoordinator, ICPersistentContainer, NSArray, NSData, NSDictionary, NSError, NSManagedObjectContext, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface ICNoteContext : NSObject <ICManagedObjectContextUpdaterDelegate, ICNoteContainer>
{
    BOOL _delaySaving;
    BOOL _databaseOpenFailedDueToLowDiskSpace;
    BOOL _saving;
    BOOL _shouldEnsureLocalAccount;
    ICPersistentContainer *_persistentContainer;
    ICNotesCrossProcessChangeCoordinator *_crossProcessChangeCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    ICNote *_currentNote;
    NSError *_databaseOpenError;
    NSTimer *_updateAttachmentLocationsTimer;
    NSUInteger _contextOptions;
    ICManagedObjectContextUpdater *_contextUpdater;
    ICAccountUtilities *_accountUtilities;
    NSTimer *_trashDeletionTimer;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSDictionary *_persistentStoresByAccountId;
}

+ (BOOL)isActive;
+ (BOOL)hasContextOptions:(NSUInteger)arg1;
+ (void)crashThisApp;
+ (id)filenameFromFileWrapper:(id)arg1;
+ (id)searchIndexerDataSource;
+ (void)setLegacyNotesDisabled:(BOOL)arg1;
+ (BOOL)legacyNotesDisabled;
+ (BOOL)updateSharedStateFile:(id)arg1 toState:(BOOL)arg2 error:(id )arg3;
+ (void)markOldTrashedNotesForDeletionInContext:(id)arg1;
+ (BOOL)isSingleRunningNotesApp;
+ (BOOL)hasSharedContext;
+ (id)sharedContext;
+ (void)startSharedContextWithOptions:(NSUInteger)arg1;
@property(retain, nonatomic) NSDictionary *persistentStoresByAccountId; // @synthesize persistentStoresByAccountId=_persistentStoresByAccountId;
@property(nonatomic) BOOL shouldEnsureLocalAccount; // @synthesize shouldEnsureLocalAccount=_shouldEnsureLocalAccount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property(retain, nonatomic) NSTimer *trashDeletionTimer; // @synthesize trashDeletionTimer=_trashDeletionTimer;
@property(retain, nonatomic) ICAccountUtilities *accountUtilities; // @synthesize accountUtilities=_accountUtilities;
@property(getter=isSaving) BOOL saving; // @synthesize saving=_saving;
@property(retain, nonatomic) ICManagedObjectContextUpdater *contextUpdater; // @synthesize contextUpdater=_contextUpdater;
@property(nonatomic) NSUInteger contextOptions; // @synthesize contextOptions=_contextOptions;
@property(retain, nonatomic) NSTimer *updateAttachmentLocationsTimer; // @synthesize updateAttachmentLocationsTimer=_updateAttachmentLocationsTimer;
@property(nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace; // @synthesize databaseOpenFailedDueToLowDiskSpace=_databaseOpenFailedDueToLowDiskSpace;
@property(retain, nonatomic) NSError *databaseOpenError; // @synthesize databaseOpenError=_databaseOpenError;
@property(retain, nonatomic) ICNote *currentNote; // @synthesize currentNote=_currentNote;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(nonatomic) BOOL delaySaving; // @synthesize delaySaving=_delaySaving;
@property(retain, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator; // @synthesize crossProcessChangeCoordinator=_crossProcessChangeCoordinator;
// - (void).cxx_destruct;
- (void)managedObjectContextUpdater:(id)arg1 objectDidChange:(id)arg2;
- (void)postMoveUpdateChangeCountForNote:(id)arg1;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1;
@property(readonly, nonatomic) BOOL isSharedContext;
- (BOOL)hasAnyContextOptions:(NSUInteger)arg1;
- (BOOL)hasContextOptions:(NSUInteger)arg1;
- (BOOL)mergeWithSubFolderMergeableData:(id)arg1;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)saveSubFolderMergeableDataIfNeeded;
@property(retain, nonatomic) NSData *subFolderOrderMergeableData;
@property(readonly, nonatomic) NSArray *visibleSubFolders;
@property(readonly, nonatomic) NSString *containerIdentifier;
@property(readonly, nonatomic) BOOL isTrashFolder;
- (BOOL)isModernCustomFolder;
@property(readonly, nonatomic) BOOL isAllNotesContainer;
@property(readonly, nonatomic) BOOL canBeSharedViaICloud;
@property(readonly, nonatomic) BOOL isSharedViaICloud;
- (BOOL)isDeleted;
- (id)noteVisibilityTestingForSearchingAccount;
@property(readonly, nonatomic) BOOL supportsEditingNotes;
- (id)detailForTableViewCell;
- (id)titleForTableViewCell;
- (id)titleForNavigationBar;
- (id)accountName;
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;
- (id)customNoteSortTypeValue;
- (void)saveAndClearDecryptedDataIfNecessary;
- (void)deleteEverything;
- (void)purgeEverything;
- (void)setupCrossProcessChangeCoordinator;
- (void)destroyPersistentStore;
- (id)persistentStoreForAccountID:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)newWorkerManagedObjectContext;
- (void)cleanupAdditionalPersistentStores;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg1 persistentContainer:(id)arg2;
- (id)defaultPersistentStoreFromPersistentStores:(id)arg1;
- (void)refreshPersistentStoresByAccountIdFromPersistentStores:(id)arg1;
- (id)storeFilenameForAccountIdentifier:(id)arg1;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadAdditionalPersistentStores;
@property(readonly) ICPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void)reloadPersistentContainer;
- (void)clearPersistentContainer;
- (id)persistentContainerQueue;
- (void)startSearchIndexerChangeObservingIfNecessary;
- (id)fetchedResultsControllerForFetchRequest:(id)arg1 sectionNameKeyPath:(id)arg2;
- (id)newFetchedResultsControllerForAllAccounts;
@property(readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
- (id)predicateForSearchableNotes;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleNotes;
- (NSUInteger)visibleNotesCount;
- (id)visibleNotes;
- (BOOL)noteIsVisible:(id)arg1;
- (void)addOrDeleteLocalAccountIfNecessary;
- (id)allICloudACAccounts;
- (id)primaryICloudACAccount;
- (void)accountsDidChange:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)refreshAll;
- (id)predicateForSearchableAttachments;
- (BOOL)recoverFromSaveError;
- (BOOL)save;
- (BOOL)saveImmediately;
- (BOOL)save:(id )arg1;
- (void)setupTrashDeletionTimer;
- (void)purgeDeletedObjectsInManagedObjectContext:(id)arg1;
- (void)applicationWillTerminate;
- (void)dealloc;
- (id)initWithOptions:(NSUInteger)arg1;

@end

