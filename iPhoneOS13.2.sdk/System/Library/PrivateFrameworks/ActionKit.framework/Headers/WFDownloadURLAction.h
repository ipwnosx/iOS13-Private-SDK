//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFDownloadURLAction : WFAction
{
}

- (void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(CDUnknownBlockType)arg2 writtenByteCountHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)configureRuntimeResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

