//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource
{
    NSArray *_concerns;
    long long _selectedConcernIndex;
    SUTextViewCell *_textViewCell;
}

@property(nonatomic) long long selectedConcernIndex; // @synthesize selectedConcernIndex=_selectedConcernIndex;
@property(retain, nonatomic) NSArray *concerns; // @synthesize concerns=_concerns;
- (id)_titleCellForIndexPath:(id)arg1;
- (long long)tableViewStyle;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
@property(readonly, nonatomic) SUTextViewCell *textViewCell; // @synthesize textViewCell=_textViewCell;
- (void)dealloc;
- (id)init;

@end

