//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFActionEventObserver-Protocol.h>

@class WFAction;

@interface WFModuleHeadingActivityView : UIActivityIndicatorView <WFActionEventObserver>
{
    WFAction *_action;
}

@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)actionRunningStateDidChange:(id)arg1;

@end

