//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIDocumentInteractionController;

@interface SUDocumentInteractionSession : NSObject <UIDocumentInteractionControllerDelegate>
{
    id /* CDUnknownBlockType */ _completionHandler;
    UIDocumentInteractionController *_documentInteractionController;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithDocumentInteractionController:(id)arg1;

@end

