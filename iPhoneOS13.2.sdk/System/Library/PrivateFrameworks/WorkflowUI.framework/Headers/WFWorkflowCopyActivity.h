//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity
{
    NSURL *_excludedURL;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSURL *excludedURL; // @synthesize excludedURL=_excludedURL;
// - (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithExcludedURL:(id)arg1;

@end

