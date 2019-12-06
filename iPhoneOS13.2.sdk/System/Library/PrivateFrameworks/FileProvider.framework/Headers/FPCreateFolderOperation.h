//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPItemID, NSString;

@interface FPCreateFolderOperation : FPActionOperation
{
    FPItem *_parentItem;
    NSString *_folderFilename;
    FPItemID *_placeholderID;
    id /* CDUnknownBlockType */ _createFolderCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ createFolderCompletionBlock; // @synthesize createFolderCompletionBlock=_createFolderCompletionBlock;
// - (void).cxx_destruct;
- (void)presendNotifications;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (id)initWithParentItem:(id)arg1 folderName:(id)arg2;

@end

