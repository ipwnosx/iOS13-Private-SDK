//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIColorScheme, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection
{
    NSMutableArray *_actions;
    SKUIProductPageItem *_item;
    NSMutableArray *_titles;
    SKUIColorScheme *_colorScheme;
}

@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
// - (void).cxx_destruct;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2 askPermission:(BOOL)arg3;

@end

