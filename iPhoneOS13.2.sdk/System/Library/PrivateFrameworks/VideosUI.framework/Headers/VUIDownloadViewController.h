//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/VUIDownloadDataSourceDelegate-Protocol.h>
#import <VideosUI/VUIDownloadEntityTableViewCellDelegate-Protocol.h>

@class NSMutableArray, UIBarButtonItem, UITableView, VUIDownloadDataSource, VUIDownloadEntityTableViewCell;

__attribute__((visibility("hidden")))
@interface VUIDownloadViewController : VUILibraryFetchControllerViewController <UITableViewDataSource, UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate>
{
    UITableView *_downloadEntitiesTableView;
    VUIDownloadDataSource *_downloadManager;
    NSMutableArray *_downloadEntities;
    VUIDownloadEntityTableViewCell *_sizingCell;
    UIBarButtonItem *_rightBarButtonItem;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    NSMutableArray *_assetControllersToRemove;
}

@property(retain, nonatomic) NSMutableArray *assetControllersToRemove; // @synthesize assetControllersToRemove=_assetControllersToRemove;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) VUIDownloadEntityTableViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) NSMutableArray *downloadEntities; // @synthesize downloadEntities=_downloadEntities;
@property(retain, nonatomic) VUIDownloadDataSource *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) UITableView *downloadEntitiesTableView; // @synthesize downloadEntitiesTableView=_downloadEntitiesTableView;
// - (void).cxx_destruct;
- (void)_updateMediaEntitiesWithNewDownloads:(id)arg1;
- (void)_exitEditingMode;
- (id)_configureAlertControllerForIndexPath:(id)arg1;
- (void)_cancelPressed;
- (void)_editToggled;
- (void)downloadCellDidRequestCancelDownload:(id)arg1;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithMediaLibrary:(id)arg1;

@end

