//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPassFooterContentView;

@protocol PKPassFooterContentViewDelegate <NSObject>
- (void)passFooterContentViewDidChangePileSuppressionRequirement:(PKPassFooterContentView *)arg1;
- (NSUInteger)suppressedContentForContentView:(PKPassFooterContentView *)arg1;
- (BOOL)isPassFooterContentViewInGroup:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeCoachingState:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidChangeUserIntentRequirement:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewRequestsSessionSuppression:(PKPassFooterContentView *)arg1;
- (void)passFooterContentViewDidAuthenticate:(PKPassFooterContentView *)arg1;
@end

