//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICNoteContainer.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAccountProxy, ICFolder, NSPersistentStore, NSString;

@interface ICAccount : ICNoteContainer <ICCloudObject>
{
    BOOL _didAddObservers;
    BOOL _didAddTrashObservers;
    ICFolder *_defaultFolder;
    ICFolder *_trashFolder;
    ICAccountProxy *_accountProxy;
}

+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;
+ (void)localeDidChange:(id)arg1;
+ (void)initialize;
+ (void)setAccountUtilities:(id)arg1;
+ (id)accountUtilities;
+ (BOOL)hasActiveCloudKitAccountInContext:(id)arg1;
+ (id)accountsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)localizedLocalAccountNameMidSentence;
+ (id)localizedLocalAccountName;
+ (BOOL)clearAccountForAppleCloudKitTable;
+ (BOOL)isCloudKitAccountAvailable;
+ (id)accountsWithAccountType:(int)arg1 context:(id)arg2;
+ (id)allActiveCloudKitAccountsInContext:(id)arg1;
+ (id)allCloudKitAccountsInContext:(id)arg1;
+ (id)allActiveAccountsInContext:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3;
+ (id)allActiveAccountsInContext:(id)arg1;
+ (NSUInteger)numberOfCloudKitAccountsInContext:(id)arg1 onlyMigrated:(BOOL)arg2;
+ (id)allAccountIdentifiersInContext:(id)arg1;
+ (id)allAccountsInContext:(id)arg1;
+ (id)defaultAccountInContext:(id)arg1;
+ (id)localAccountInContext:(id)arg1;
+ (id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1;
+ (id)cloudKitAccountInContext:(id)arg1;
+ (id)cloudKitAccountWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)accountWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)deleteAccountWithBatchDelete:(id)arg1;
+ (void)deleteAccount:(id)arg1;
+ (id)newLocalAccountInContext:(id)arg1;
+ (id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (void)initializeLocalAccountNamesInBackground;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) ICAccountProxy *accountProxy; // @synthesize accountProxy=_accountProxy;
@property(retain, nonatomic) ICFolder *trashFolder; // @synthesize trashFolder=_trashFolder;
@property(retain, nonatomic) ICFolder *defaultFolder; // @synthesize defaultFolder=_defaultFolder;
@property(nonatomic) BOOL didAddTrashObservers; // @synthesize didAddTrashObservers=_didAddTrashObservers;
@property(nonatomic) BOOL didAddObservers; // @synthesize didAddObservers=_didAddObservers;
// - (void).cxx_destruct;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)subFolderOrderMergeableData;
- (void)setSubFolderOrderMergeableData:(id)arg1;
- (id)visibleSubFolders;
- (id)ic_loggingValues;
- (id)ic_loggingIdentifier;
- (void)updateTrashFolderHiddenNoteContainerState;
- (void)noteWillBeDeletedOrUndeleted:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (BOOL)supportsEditingNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotesIncludingTrash;
- (id)predicateForVisibleNotes;
- (id)predicateForAttachmentsInAccount;
- (id)predicateForNotesInAccount;
- (id)titleForTableViewCell;
- (void)updateAccountNameForAccountListSorting;
@property(nonatomic) BOOL didChooseToMigrate; // @dynamic didChooseToMigrate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int accountType; // @dynamic accountType;
- (BOOL)isAllNotesContainer;
- (id)titleForNavigationBar;
- (NSUInteger)visibleNotesIncludingTrashCount;
- (NSUInteger)visibleNotesCount;
- (id)visibleNotes;
- (id)accountName;
- (BOOL)canBeSharedViaICloud;
- (BOOL)canPasswordProtectNotes;
- (id)passwordProtectedNotes;
- (id)cryptoPassphraseVerifier;
- (id)previewImageDirectoryURL;
- (id)exportableMediaDirectoryURL;
- (id)mediaDirectoryURL;
- (id)fallbackImageDirectoryURL;
- (id)accountFilesDirectoryURL;
- (BOOL)shouldExcludeFilesFromCloudBackup;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (id)folderWithIdentifier:(id)arg1;
- (id)subFolderIdentifiersOrderedSet;
- (id)visibleNoteContainerChildren;
- (id)visibleNoteContainers;
- (id)reservedAccountFolderTitles;
- (BOOL)hasAnyCustomFolders;
- (BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg1;
- (id)visibleFoldersWithParent:(id)arg1;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleFolders;
- (id)predicateForFolders;
- (NSUInteger)indexOfCustomRootLevelFolder:(id)arg1;
- (id)customRootLevelFolders;
- (BOOL)containsSharedFolders;
- (id)visibleFolders;
- (BOOL)hasSameCryptoKeyAsAccount:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)supportsLegacyTombstones;
- (BOOL)isDeletable;
- (BOOL)isLeaf;
@property(readonly, nonatomic) NSPersistentStore *persistentStore;
- (id)localizedNameMidSentence;
@property(readonly, nonatomic) NSString *localizedName;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (id)trashFolderIdentifier;
- (id)defaultFolderIdentifier;
- (id)containerIdentifier;
- (void)createTrashFolder;
- (void)createDefaultFolder;
- (void)createStandardFolders;
- (void)performBlockInPersonaContextIfNecessary:(CDUnknownBlockType)arg1;
- (id)customNoteSortTypeValue;
- (id)accountDataCreateIfNecessary;
- (void)setMarkedForDeletion:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (void)addTrashObserversIfNecessary;
- (void)dealloc;
- (void)willTurnIntoFault;
- (void)prepareForDeletion;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (id)cacheKey;
@property(readonly, nonatomic) BOOL isManaged;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (BOOL)shouldBeDeletedFromLocalDatabase;
- (BOOL)needsToBePushedToCloud;
- (BOOL)needsToBeDeletedFromCloud;
- (id)recordType;
- (id)recordZoneName;
- (id)recordName;
- (BOOL)isInICloudAccount;

@end

