//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell
{
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
// - (void).cxx_destruct;
- (id)_setStatusLabelText;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
