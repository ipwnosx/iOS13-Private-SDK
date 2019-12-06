//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, TKTonePickerController, TKTonePickerItem;

@protocol TKTonePickerControllerDelegate <NSObject>

@optional
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDownloadProgressOfTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDetailText:(NSString *)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateFooterTextOfTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateHeaderTextOfTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didInsertTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didInsertPickerRowItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didDeleteTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didDeletePickerRowItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 requestsPerformingBatchUpdates:(void (^)(void))arg2 completion:(void (^)(BOOL))arg3;
- (void)tonePickerControllerDidReloadTones:(TKTonePickerController *)arg1;
@end

