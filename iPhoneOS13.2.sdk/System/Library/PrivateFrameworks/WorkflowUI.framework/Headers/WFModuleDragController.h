//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFComponentDragController.h>

@class NSArray, WFAction;

@interface WFModuleDragController : WFComponentDragController
{
    NSArray *_actions;
    WFAction *_sourceAction;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) WFAction *sourceAction; // @synthesize sourceAction=_sourceAction;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
// - (void).cxx_destruct;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)updateCurrentViewControllers;
- (void)loadView;
- (void)reset;
- (long long)sizeRangeFlexibility;
- (id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2;

@end

