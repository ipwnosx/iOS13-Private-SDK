//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKAddedToDocumentContext.h>

@class NSMutableArray;
@protocol TSKMultiTableRemapping;

__attribute__((visibility("hidden")))
@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext
{
    NSMutableArray *mAddedDrawables;
    id <TSKMultiTableRemapping> mMultiTableRemapper;
}

- (void)setMultiTableRemapper:(id)arg1;
- (id)multiTableRemapper;
- (BOOL)syncChanges;
- (BOOL)uniqueBookmarks;
- (BOOL)autoUpdateSmartFields;
- (BOOL)wasPasted;
- (id)description;
- (id)addedDrawables;
- (void)addDrawables:(id)arg1;
- (void)addDrawable:(id)arg1;
- (void)dealloc;
- (id)init;

@end

