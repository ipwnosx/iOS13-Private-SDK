//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCleanSubitems : BROperation
{
    NSURL *_url;
    id /* CDUnknownBlockType */ _cleanSubitemsCompletionBlock;
}

@property(copy) id /* CDUnknownBlockType */ cleanSubitemsCompletionBlock; // @synthesize cleanSubitemsCompletionBlock=_cleanSubitemsCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1;

@end

