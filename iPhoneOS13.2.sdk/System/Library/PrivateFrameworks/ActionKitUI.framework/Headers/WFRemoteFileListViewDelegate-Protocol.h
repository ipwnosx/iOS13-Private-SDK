//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class WFRemoteFileListView;
@protocol WFRemoteFile;

@protocol WFRemoteFileListViewDelegate
- (BOOL)fileListView:(WFRemoteFileListView *)arg1 shouldDisplayCheckmarkForFile:(id <WFRemoteFile>)arg2;
- (BOOL)fileListView:(WFRemoteFileListView *)arg1 shouldSelectFile:(id <WFRemoteFile>)arg2;
- (void)fileListView:(WFRemoteFileListView *)arg1 didSelectFile:(id <WFRemoteFile>)arg2;
@end

