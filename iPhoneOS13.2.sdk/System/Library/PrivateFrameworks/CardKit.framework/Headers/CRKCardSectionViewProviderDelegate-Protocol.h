//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CRKCardSectionViewProviding, CRKFeedbackDelegate;

@protocol CRKCardSectionViewProviderDelegate <NSObject>

@optional
- (double)boundingWidthForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (BOOL)cardSectionDisplayRequiresUserConsentForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (id <CRKFeedbackDelegate>)defaultFeedbackDelegateForProvider:(id <CRKCardSectionViewProviding>)arg1;
@end

