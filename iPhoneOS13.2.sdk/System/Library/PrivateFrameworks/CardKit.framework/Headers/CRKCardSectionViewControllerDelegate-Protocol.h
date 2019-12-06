//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/CRFeedbackListener-Protocol.h>

@class CRKCardSectionViewController, INIntent, UIViewController;
@protocol CRCommand;

@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>

@optional
- (long long)preferredPunchoutIndexForCardSectionViewController:(CRKCardSectionViewController *)arg1;
- (void)cardSectionViewController:(CRKCardSectionViewController *)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)cardSectionViewController:(CRKCardSectionViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (CGSize)boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg1;
- (void)cardSectionViewController:(CRKCardSectionViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(CRKCardSectionViewController *)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(CRKCardSectionViewController *)arg1;
- (BOOL)performCommand:(id <CRCommand>)arg1 forCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (BOOL)canPerformCommand:(id <CRCommand>)arg1 forCardSectionViewController:(CRKCardSectionViewController *)arg2;
@end

