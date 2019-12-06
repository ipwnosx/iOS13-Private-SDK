//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKitUI/_CLKUITimeLabelManager-Protocol.h>

@class CLKDevice, CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, NSString, UIColor, UILabel, UIView;

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager>
{
    CLKDevice *_device;
    UILabel *_label;
    CLKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    CLKUITimeLabelStyle *_style;
    double _maxWidth;
    NSAttributedString *_correctAttributedText;
    BOOL _showsDesignator;
    BOOL _showSubstringToSeparator;
    BOOL _showSubstringFromSeparator;
    BOOL _hideMinutesIfZero;
    BOOL _primary;
    CGSize _cachedIntrinsicSize;
    UIEdgeInsets _cachedOpticalEdgeInsets;
    BOOL _cachedOpticalEdgeInsetsIsValid;
    BOOL _showSeconds;
    UIColor *_textColor;
    BOOL _animationsPaused;
    BOOL _showsBlinker;
    BOOL _showsNumbers;
}

@property(nonatomic) BOOL showsNumbers; // @synthesize showsNumbers=_showsNumbers;
@property(nonatomic) BOOL showsBlinker; // @synthesize showsBlinker=_showsBlinker;
@property(nonatomic) BOOL showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) BOOL animationsPaused; // @synthesize animationsPaused=_animationsPaused;
// - (void).cxx_destruct;
- (id)_attributedTextShowingBlinker:(BOOL)arg1 numbers:(BOOL)arg2;
- (void)_updateAttributedText;
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) UIEdgeInsets opticalInsets;
- (void)sizeViewToFit;
- (CGSize)sizeThatFits;
@property(readonly, nonatomic) CGSize intrinsicSize;
- (void)updateTimeText;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (id)viewForLastBaselineLayout;
- (double)_lastLineBaseline;
- (void)setMaxWidth:(double)arg1;
- (void)setShowsDesignator:(BOOL)arg1;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (id)_initForDevice:(id)arg1 primary:(BOOL)arg2 withTimeFormatter:(id)arg3 options:(NSUInteger)arg4 labelFactory:(CDUnknownBlockType)arg5;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(NSUInteger)arg3 labelFactory:(CDUnknownBlockType)arg4;

@end

