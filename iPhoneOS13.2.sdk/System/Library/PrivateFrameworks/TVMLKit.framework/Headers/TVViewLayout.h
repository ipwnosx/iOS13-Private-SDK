//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface TVViewLayout : NSObject
{
    BOOL _acceptsFocus;
    BOOL _centerGrowth;
    UIColor *_tintColor;
    UIColor *_darkTintColor;
    UIColor *_backgroundColor;
    UIColor *_darkBackgroundColor;
    double _height;
    double _maxHeight;
    double _maxWidth;
    double _minHeight;
    double _minWidth;
    double _width;
    double _focusSizeIncrease;
    NSString *_focusAlign;
    double _lineSpacing;
    long long _alignment;
    long long _contentAlignment;
    UIColor *_highlightColor;
    long long _position;
    NSString *_highlightStyle;
    double _interitemSpacing;
    NSString *_progressStyle;
    NSString *_group;
    UIEdgeInsets _margin;
    UIEdgeInsets _padding;
    UIEdgeInsets _focusMargin;
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (Class)layoutClassForElement:(id)arg1;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *progressStyle; // @synthesize progressStyle=_progressStyle;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(copy, nonatomic) NSString *highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(nonatomic) BOOL centerGrowth; // @synthesize centerGrowth=_centerGrowth;
@property(nonatomic) BOOL acceptsFocus; // @synthesize acceptsFocus=_acceptsFocus;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(copy, nonatomic) NSString *focusAlign; // @synthesize focusAlign=_focusAlign;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) UIEdgeInsets focusMargin; // @synthesize focusMargin=_focusMargin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIColor *darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *darkTintColor; // @synthesize darkTintColor=_darkTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) UIEdgeInsets margin; // @synthesize margin=_margin;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (CDUnknownBlockType)tv_layoutPropertyGetterForStyle:(id)arg1;
- (CDUnknownBlockType)tv_layoutPropertySetterForStyle:(id)arg1;

@end

