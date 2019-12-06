//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUSliderValueTableViewCellDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/MPMediaPickerControllerDelegatePrivate-Protocol.h>

@class HUMediaSelectionItemManager;
@protocol HUMediaSelectionViewControllerDelegate;

@interface HUMediaSelectionViewController : HUItemTableViewController <MPMediaPickerControllerDelegatePrivate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate>
{
    id <HUMediaSelectionViewControllerDelegate> _delegate;
    HUMediaSelectionItemManager *_mediaSelectionItemManager;
    NSUInteger _lastTargetOptions;
}

@property(nonatomic) NSUInteger lastTargetOptions; // @synthesize lastTargetOptions=_lastTargetOptions;
@property(retain, nonatomic) HUMediaSelectionItemManager *mediaSelectionItemManager; // @synthesize mediaSelectionItemManager=_mediaSelectionItemManager;
@property(nonatomic) __weak id <HUMediaSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2;
- (id)_musicAppURL;
- (void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2;
- (void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg1 pickingForExternalPlayer:(BOOL)arg2;
- (BOOL)_allowRowInteractionForIndexPath:(id)arg1;
- (void)applyAccessory:(long long)arg1 toItem:(id)arg2 onTableView:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)viewDidLoad;
- (id)initWithActionSetBuilder:(id)arg1;

@end

