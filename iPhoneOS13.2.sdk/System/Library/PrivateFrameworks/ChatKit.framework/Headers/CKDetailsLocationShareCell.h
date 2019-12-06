//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDetailsCell.h>

#import <ChatKit/CKDetailsCell-Protocol.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsLocationShareCell : CKDetailsCell <CKDetailsCell>
{
    BOOL _showOfferTimeRemaining;
    double _offerTimeRemaining;
    UILabel *_timeRemainingLabel;
}

+ (double)preferredHeight;
+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *timeRemainingLabel; // @synthesize timeRemainingLabel=_timeRemainingLabel;
@property(nonatomic) double offerTimeRemaining; // @synthesize offerTimeRemaining=_offerTimeRemaining;
@property(nonatomic) BOOL showOfferTimeRemaining; // @synthesize showOfferTimeRemaining=_showOfferTimeRemaining;
// - (void).cxx_destruct;
- (id)timeStringForTimeInterval:(double)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

