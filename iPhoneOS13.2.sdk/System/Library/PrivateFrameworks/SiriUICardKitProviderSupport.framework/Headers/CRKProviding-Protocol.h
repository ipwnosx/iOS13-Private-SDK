//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUICardKitProviderSupport/CRKCardViewControllerProviding-Protocol.h>

@protocol CRCard, CRKCardSectionViewProviderDelegate;

@protocol CRKProviding <CRKCardViewControllerProviding>

@optional
- (void)requestCardSectionViewProviderForCard:(id <CRCard>)arg1 delegate:(id <CRKCardSectionViewProviderDelegate>)arg2 reply:(void (^)(NSError *, id <CRKCardSectionViewProviding>))arg3;
@end

