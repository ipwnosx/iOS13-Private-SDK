//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKTranscriptPluginBalloonView, PKPeerPaymentBubbleView;

@interface PKPeerPaymentMessageBalloonView : UIView
{
    PKPeerPaymentBubbleView *_bubbleView;
    long long _peerPaymentType;
    CKTranscriptPluginBalloonView *_balloonView;
}

@property(retain, nonatomic) CKTranscriptPluginBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(readonly, nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;
@property(readonly, nonatomic) PKPeerPaymentBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
// - (void).cxx_destruct;
- (void)_updateTailOrientation;
- (void)layoutSubviews;
- (id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2;

@end

