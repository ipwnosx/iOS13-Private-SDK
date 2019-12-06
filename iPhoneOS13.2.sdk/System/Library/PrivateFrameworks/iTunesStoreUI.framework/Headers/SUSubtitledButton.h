//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton
{
//    struct __CFDictionary _subtitleContentLookup;
    UILabel *_subtitleView;
}

- (long long)_subtitleLineBreakMode;
- (id)_subtitleFont;
- (id)_subtitledContentForState:(NSUInteger)arg1;
- (void)_setupSubtitleView;
- (id)subtitleShadowColorForState:(NSUInteger)arg1;
- (CGRect)subtitleRectForContentRect:(CGRect)arg1;
@property(readonly, retain, nonatomic) UILabel *subtitleLabel;
- (id)subtitleForState:(NSUInteger)arg1;
- (id)subtitleColorForState:(NSUInteger)arg1;
- (void)setSubtitleShadowColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setSubtitleColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setSubtitle:(id)arg1 forState:(NSUInteger)arg2;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property(readonly, retain, nonatomic) NSString *currentSubtitle;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

