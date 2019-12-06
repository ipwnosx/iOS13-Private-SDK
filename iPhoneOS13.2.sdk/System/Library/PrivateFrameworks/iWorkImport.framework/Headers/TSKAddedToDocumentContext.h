//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TSKMultiTableRemapping;

__attribute__((visibility("hidden")))
@interface TSKAddedToDocumentContext : NSObject
{
    NSMutableArray *mInsertedTableInfos;
}

+ (id)textBoxLinkageContext;
+ (id)migrateStylesContext;
+ (id)preserveParentStorageContext;
+ (id)exportMergedHeaderContext;
+ (id)exportFootnoteContext;
+ (id)undoDeleteContext;
+ (id)unhidingContext;
+ (id)movingContext;
+ (id)insertingPrototypeContext;
+ (id)dragCopyContext;
+ (id)moveSectionContext;
+ (id)dragMoveContext;
+ (id)pastingMatchStyleContext;
+ (id)pastingContext;
+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;
+ (id)importingContextWithImporterID:(id)arg1;
+ (id)unarchivingContext;
+ (id)defaultContext;
- (id)insertedTableInfos;
- (void)addInsertedTableInfo:(id)arg1;
@property(retain) id <TSKMultiTableRemapping> multiTableRemapper;
- (id)addedDrawables;
- (void)addDrawables:(id)arg1;
- (void)addDrawable:(id)arg1;
- (id)undoContext;
- (BOOL)preserveParentStorage;
- (BOOL)preserveChangeTracking;
- (BOOL)matchStyle;
- (BOOL)syncChanges;
- (BOOL)uniqueBookmarks;
- (BOOL)autoUpdateSmartFields;
- (BOOL)invokeDOLC;
- (BOOL)wasMigratingStyles;
- (BOOL)wasUndoDelete;
- (BOOL)wasUnhidden;
- (BOOL)wasMoved;
- (BOOL)wasDragMoved;
- (BOOL)wasDragOperation;
- (BOOL)wasPasted;
- (BOOL)wasImportedFromMasterTemplate;
- (BOOL)wasImported;
- (id)importerID;
- (BOOL)wasUnarchived;
- (void)dealloc;

@end

