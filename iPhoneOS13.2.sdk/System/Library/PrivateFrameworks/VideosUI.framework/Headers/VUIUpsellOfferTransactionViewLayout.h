//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout
{
    VUITextLayout *_disclaimerTextLayout;
    VUIButtonLayout *_buttonLayout;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
@property(readonly, nonatomic) VUIButtonLayout *buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property(readonly, nonatomic) VUITextLayout *disclaimerTextLayout; // @synthesize disclaimerTextLayout=_disclaimerTextLayout;
// - (void).cxx_destruct;
- (void)_configureLayout;
- (double)buttonSpacing;
- (double)buttonHeight;
- (double)disclaimerBottomMargin;
- (UIEdgeInsets)safeAreaInsets;
- (id)init;

@end

