//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableArray, NSMutableSet, NSNumber, NSString;

@interface ICFolderListViewState : NSObject
{
    BOOL _overrideCollapsed;
    BOOL _showSharedFoldersOnly;
    BOOL _showFoldersThatCanMoveAddOrDeleteContentsOnly;
    NSMutableSet *_expandedFolderIdentifiers;
    NSMutableSet *_collapsedAccountIdentifiers;
    NSMutableSet *_collapsedLegacyAccountIdentifiers;
    NSString *_overrideCollapsedFolder;
    NSMutableArray *_accounts;
    NSCountedSet *_folderNamesCountedSet;
    NSNumber *_customFoldersExistValue;
}

@property(retain, nonatomic) NSNumber *customFoldersExistValue; // @synthesize customFoldersExistValue=_customFoldersExistValue;
@property(retain, nonatomic) NSCountedSet *folderNamesCountedSet; // @synthesize folderNamesCountedSet=_folderNamesCountedSet;
@property(retain, nonatomic) NSMutableArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) BOOL showFoldersThatCanMoveAddOrDeleteContentsOnly; // @synthesize showFoldersThatCanMoveAddOrDeleteContentsOnly=_showFoldersThatCanMoveAddOrDeleteContentsOnly;
@property(nonatomic) BOOL showSharedFoldersOnly; // @synthesize showSharedFoldersOnly=_showSharedFoldersOnly;
@property(copy, nonatomic) NSString *overrideCollapsedFolder; // @synthesize overrideCollapsedFolder=_overrideCollapsedFolder;
@property(nonatomic) BOOL overrideCollapsed; // @synthesize overrideCollapsed=_overrideCollapsed;
@property(retain, nonatomic) NSMutableSet *collapsedLegacyAccountIdentifiers; // @synthesize collapsedLegacyAccountIdentifiers=_collapsedLegacyAccountIdentifiers;
@property(retain, nonatomic) NSMutableSet *collapsedAccountIdentifiers; // @synthesize collapsedAccountIdentifiers=_collapsedAccountIdentifiers;
@property(retain, nonatomic) NSMutableSet *expandedFolderIdentifiers; // @synthesize expandedFolderIdentifiers=_expandedFolderIdentifiers;
// - (void).cxx_destruct;
- (void)invalidateDerivedFolderState;
@property(readonly, nonatomic) BOOL customFoldersExist;
- (void)folderMovedFromOldFolder:(id)arg1 toNewFolder:(id)arg2;
- (id)indexPathOfNoteContainer:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)accountItemAtIndex:(NSUInteger)arg1;
- (NSUInteger)countOfItemsInAccountAtIndex:(NSUInteger)arg1;
- (void)removeLegacyAccounts;
- (void)removeICAccounts;
- (NSUInteger)countOfLegacyAccounts;
- (NSUInteger)indexOfICAccount:(id)arg1;
- (NSUInteger)countOfICAccounts;
- (NSUInteger)countOfAccounts;
- (id)indexesOfLegacyAccounts;
- (id)indexesOfICAccounts;
- (void)addLegacyAccount:(id)arg1 includeAllNotesFolder:(BOOL)arg2;
- (void)addICAccounts:(id)arg1 forMovingFolder:(id)arg2;
- (void)addFolderListItem:(id)arg1;
- (NSUInteger)getLegacyAccountFolderListType:(id)arg1;
- (NSUInteger)getModernAccountFolderListType:(id)arg1;
- (void)addICAccount:(id)arg1 includingTrash:(BOOL)arg2 alwaysIncludeAccountProxy:(BOOL)arg3;
- (id)description;
- (id)init;

@end

