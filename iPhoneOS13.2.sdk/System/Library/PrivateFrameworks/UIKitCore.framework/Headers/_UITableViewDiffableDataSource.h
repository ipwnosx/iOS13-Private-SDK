//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UITableView;

@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter
{
    long long _defaultRowAnimation;
}

@property(nonatomic) long long defaultRowAnimation; // @synthesize defaultRowAnimation=_defaultRowAnimation;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) __weak UITableView *tableView;
- (id)initWithTableView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;

@end

