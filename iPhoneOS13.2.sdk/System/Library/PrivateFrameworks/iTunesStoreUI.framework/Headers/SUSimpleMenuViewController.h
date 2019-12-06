//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUMenuViewController.h>

@class NSArray, NSString;

@interface SUSimpleMenuViewController : SUMenuViewController
{
    NSString *_cancelButtonTitle;
    NSArray *_titles;
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void)_cancelAction:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (BOOL)isMenuItemEnabledAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithTitles:(id)arg1;

@end

