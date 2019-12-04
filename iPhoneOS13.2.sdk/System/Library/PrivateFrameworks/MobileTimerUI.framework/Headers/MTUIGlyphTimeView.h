//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MTUIGlyphTimeView : UIView
{
    UILabel *_timeLabel;
    UIImageView *_glyphImageView;
    NSString *_glyphName;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *glyphName; // @synthesize glyphName=_glyphName;
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)setComponentColor:(id)arg1;
- (void)setupConstraints;
- (void)setupGlyphName:(id)arg1 size:(double)arg2 glyphColor:(id)arg3;
- (void)setupTimeLabelWithFont:(id)arg1 textColor:(id)arg2;
- (id)initWithFont:(id)arg1 textColor:(id)arg2 glyphName:(id)arg3 style:(unsigned long long)arg4;

@end
