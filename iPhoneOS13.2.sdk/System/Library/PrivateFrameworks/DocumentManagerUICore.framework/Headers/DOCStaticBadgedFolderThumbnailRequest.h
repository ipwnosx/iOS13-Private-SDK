//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class DOCThumbnailDescriptor;

@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest
{
    NSUInteger _folderType;
    DOCThumbnailDescriptor *_descriptor;
}

// - (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFolderType:(NSUInteger)arg1 descriptor:(id)arg2;

@end

