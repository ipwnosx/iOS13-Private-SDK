//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/CRFeedbackListener-Protocol.h>

@class UIViewController;
@protocol CRCard;

@protocol CRKFeedbackDelegate <CRFeedbackListener>

@optional
- (void)presentViewControllerForCard:(id <CRCard>)arg1 animate:(BOOL)arg2;
- (void)willDismissViewController:(UIViewController *)arg1;
- (void)presentViewController:(UIViewController *)arg1;
@end

