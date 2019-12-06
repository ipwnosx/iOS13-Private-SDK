//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray, SKUIClientContext, SKUIDeveloperInfo, SKUIProductInformationView;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoView : UIView
{
    SKUIClientContext *_clientContext;
    SKUIDeveloperInfo *_developerInfo;
    UIView *_infoSeparatorView;
    SKUIProductInformationView *_infoView;
    NSMutableArray *_lineViews;
}

@property(readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2;

@end

