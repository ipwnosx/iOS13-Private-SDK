//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/CRCommandHandling-Protocol.h>
#import <CardKit/CRFeedbackListener-Protocol.h>

@class CRBeganEditingCommand, CRKCardSectionViewController, CRNextCardCommand, CRPunchoutCommand, CRRequestUserConfirmationCommand, INIntent, UIViewController;
@protocol CRCard, CRKCardSectionViewProviderManaging, CRKCardViewControlling, CRReferentialCommand;

@protocol CRKCardViewControllerDelegate <CRFeedbackListener, CRCommandHandling>

@optional
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestCardSectionViewSourceForCard:(id <CRCard>)arg2 reply:(void (^)(id <CRKCardSectionViewSourcing>, NSError *))arg3;
- (BOOL)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id <CRKCardSectionViewProviderManaging>)arg2;
- (BOOL)performBeganEditingCommand:(CRBeganEditingCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performRequestUserConfirmationCommand:(CRRequestUserConfirmationCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (NSUInteger)navigationIndexOfCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (BOOL)canPerformReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (id <CRCard>)baseCardForCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (CGSize)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 didFailToLoadCard:(id <CRCard>)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(UIViewController<CRKCardViewControlling> *)arg1;
- (void)cardViewControllerDidLoad:(UIViewController<CRKCardViewControlling> *)arg1;
@end

