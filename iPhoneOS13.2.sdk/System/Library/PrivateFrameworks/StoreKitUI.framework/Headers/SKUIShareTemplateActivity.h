//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIClientContext, SKUIShareSheetActivityViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateActivity : UIActivity
{
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}

// - (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2;

@end

