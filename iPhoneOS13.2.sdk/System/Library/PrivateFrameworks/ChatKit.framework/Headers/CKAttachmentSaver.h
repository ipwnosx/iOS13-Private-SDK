//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CKAttachmentSaver : NSObject
{
    NSUInteger _errorCount;
    NSMutableArray *_attachments;
}

// - (void).cxx_destruct;
- (void)_saveCompletion:(id)arg1;
- (void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void )arg3;
- (void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void )arg3;
- (void)_saveNextAttachment;
- (void)_pop;
- (void)runToCompletion;
- (void)popAndSaveNextAttachment;
- (id)initWithAttachments:(id)arg1;

@end

