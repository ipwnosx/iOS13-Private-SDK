//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString;

@interface CAMShutterIndicatorView : UIView
{
    NSAttributedString *__indicatorText;
}

@property(readonly, nonatomic) NSAttributedString *_indicatorText; // @synthesize _indicatorText=__indicatorText;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonCAMShutterIndicatorViewInitialization;

@end

