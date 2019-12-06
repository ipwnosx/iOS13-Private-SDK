//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKHyperlinkBalloonView.h>


@class UIImageView;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate>
{
    BOOL _avoidTextLineBreaks;
    UIImageView *_chevron;
}

@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(nonatomic) BOOL avoidTextLineBreaks; // @synthesize avoidTextLineBreaks=_avoidTextLineBreaks;
// - (void).cxx_destruct;
- (void)prepareForDisplay;
- (CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets )arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureForMessagePart:(id)arg1;

@end

