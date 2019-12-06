//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, UITableView, UITableViewCell, UIViewController, WDProfile;

@protocol WDTableViewSectionDelegate <NSObject>
@property(retain, nonatomic) UITableView *tableView;
@property(retain, nonatomic) WDProfile *profile;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)sectionAddedChildViewController:(UIViewController *)arg1;
- (void)pushViewController:(UIViewController *)arg1;
- (void)reloadTable;
- (void)reloadSection:(NSUInteger)arg1 animated:(BOOL)arg2;
- (NSIndexPath *)indexPathForCell:(UITableViewCell *)arg1;
@end

