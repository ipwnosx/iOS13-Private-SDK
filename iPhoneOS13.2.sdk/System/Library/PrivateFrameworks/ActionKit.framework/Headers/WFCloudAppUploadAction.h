//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/CLAPIEngineDelegate-Protocol.h>

@class CLAPIEngine;

@interface WFCloudAppUploadAction : WFAction <CLAPIEngineDelegate>
{
    CLAPIEngine *_engine;
}

@property(retain, nonatomic) CLAPIEngine *engine; // @synthesize engine=_engine;
// - (void).cxx_destruct;
- (void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)fileUploadDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)fileUploadDidProgress:(double)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)linkBookmarkDidSucceedWithResultingItem:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)cancel;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;

@end

