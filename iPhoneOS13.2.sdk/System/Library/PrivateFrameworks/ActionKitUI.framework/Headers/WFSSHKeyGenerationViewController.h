//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNumber, WFSegmentedControlTableItem, WFTableDataSource, WFTableSection, WFTextFieldTableItem;
@protocol WFSSHKeyGenerationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFSSHKeyGenerationViewController : UITableViewController
{
    id <WFSSHKeyGenerationViewControllerDelegate> _delegate;
    WFTableDataSource *_dataSource;
    WFTableSection *_keyTypeSection;
    WFTableSection *_keySizeSection;
    WFTableSection *_commentSection;
    WFSegmentedControlTableItem *_keyTypeItem;
    WFSegmentedControlTableItem *_keySizeItem;
    Class _currentFormat;
    NSNumber *_currentKeySize;
    WFTextFieldTableItem *_commentItem;
}

@property(readonly, nonatomic) WFTextFieldTableItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) NSNumber *currentKeySize; // @synthesize currentKeySize=_currentKeySize;
@property(nonatomic) Class currentFormat; // @synthesize currentFormat=_currentFormat;
@property(readonly, nonatomic) WFSegmentedControlTableItem *keySizeItem; // @synthesize keySizeItem=_keySizeItem;
@property(readonly, nonatomic) WFSegmentedControlTableItem *keyTypeItem; // @synthesize keyTypeItem=_keyTypeItem;
@property(readonly, nonatomic) WFTableSection *commentSection; // @synthesize commentSection=_commentSection;
@property(readonly, nonatomic) WFTableSection *keySizeSection; // @synthesize keySizeSection=_keySizeSection;
@property(readonly, nonatomic) WFTableSection *keyTypeSection; // @synthesize keyTypeSection=_keyTypeSection;
@property(readonly, nonatomic) WFTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WFSSHKeyGenerationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)updateVisibleItems;
- (void)generateKeyPairAndFinish;
- (void)keySizeDidChange:(id)arg1;
- (void)authenticationTypeDidChange:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

