//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class AssistantVoiceDownloadingView;

@interface AssistantVoiceDownloadingCell : PSTableCell
{
    AssistantVoiceDownloadingView *_downloadingView;
    BOOL _downloading;
}

// - (void).cxx_destruct;
- (void)setDownloading:(BOOL)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

