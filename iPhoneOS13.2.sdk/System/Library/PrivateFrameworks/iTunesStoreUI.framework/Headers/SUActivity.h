//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImage, UIViewController;
@protocol SUActivityDelegate;

@interface SUActivity : UIActivity
{
    id <SUActivityDelegate> _delegate;
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}

@property(nonatomic) __weak id <SUActivityDelegate> ITunesStoreDelegate; // @synthesize ITunesStoreDelegate=_delegate;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (void)setActivityViewController:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityImage:(id)arg1;
- (void)dealloc;

@end

