//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class SiriUIContentButton, SiriUIKeyline;

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView
{
    SiriUIKeyline *_verticalKeyline;
    SiriUIKeyline *_horizontalKeyline;
    SiriUIContentButton *_leftButton;
    SiriUIContentButton *_rightButton;
}

+ (double)defaultHeight;
@property(readonly, nonatomic) SiriUIContentButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) SiriUIContentButton *leftButton; // @synthesize leftButton=_leftButton;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

