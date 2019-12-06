//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUGradientButton.h>

@class NSString, UIImageView;

@interface SUReviewsButton : SUGradientButton
{
    UIImageView *_disclosureView;
    float _userRating;
    long long _userRatingCount;
    NSString *_userRatingCountString;
}

@property(retain, nonatomic) NSString *userRatingCountString; // @synthesize userRatingCountString=_userRatingCountString;
@property(nonatomic) long long userRatingCount; // @synthesize userRatingCount=_userRatingCount;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (void)layoutSubviews;
- (CGRect)contentRectForBounds:(CGRect)arg1;
- (void)reloadView;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

