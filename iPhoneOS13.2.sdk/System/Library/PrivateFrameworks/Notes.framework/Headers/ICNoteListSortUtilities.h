//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNoteListSortUtilities : NSObject
{
}

+ (long long)tagForSortType:(long long)arg1;
+ (long long)sortTypeForTag:(long long)arg1;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(long long)arg1;
+ (void)setCurrentNoteListSortTypeByTag:(long long)arg1;
+ (id)descriptionForNoteListSortType:(long long)arg1;
+ (long long)sortTypeForFolderNoteOrder:(NSUInteger)arg1;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 folderNoteSortType:(id)arg2;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForType:(long long)arg1 ascending:(BOOL)arg2;
+ (id)sortDescriptorsForType:(long long)arg1;
+ (void)setCurrentNoteListSortType:(long long)arg1;
+ (long long)currentNoteListSortType;

@end

