//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICDocCamDocumentInfo, ICDocCamImageCache, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface DCMarkupActivity : UIActivity
{
    NSUInteger _inkStyle;
    UIView *_fromView;
    UIViewController *_presentingViewController;
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
    id /* CDUnknownBlockType */ _frameBlock;
    id /* CDUnknownBlockType */ _completionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ frameBlock; // @synthesize frameBlock=_frameBlock;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) NSUInteger inkStyle; // @synthesize inkStyle=_inkStyle;
// - (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

