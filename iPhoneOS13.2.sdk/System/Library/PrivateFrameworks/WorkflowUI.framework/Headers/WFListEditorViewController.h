//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <WorkflowUI/WFComponentNavigationContext-Protocol.h>

@class WFListEditorView;

@interface WFListEditorViewController : UIViewController <WFComponentNavigationContext>
{
    WFListEditorView *_editorView;
}

+ (Class)editorViewClass;
@property(readonly, nonatomic) WFListEditorView *editorView; // @synthesize editorView=_editorView;
// - (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *componentHostingViewController;
- (void)done;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

