//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewController.h>

#import <IntentsUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>

@protocol CRKCardSectionViewControllingDelegate;

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling>
{
    id _touchDeliveryPolicyAssertion;
    id <CRKCardSectionViewControllingDelegate> _cardSectionViewControllingDelegate;
}

@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate=_cardSectionViewControllingDelegate;
// - (void).cxx_destruct;
- (void)cardEventDidOccur:(NSUInteger)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)remoteViewControllerWillBeginEditing:(id)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;

@end

