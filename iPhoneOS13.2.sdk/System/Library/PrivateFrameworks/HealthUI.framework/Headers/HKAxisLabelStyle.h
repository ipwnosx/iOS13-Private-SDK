//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor, UIFont;
@protocol HKNumberFormatter;

@interface HKAxisLabelStyle : NSObject <NSCopying>
{
    UIColor *_textColor;
    UIFont *_font;
    long long _horizontalAlignment;
    long long _verticalAlignment;
    id <HKNumberFormatter> _numberFormatter;
}

+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 numberFormatter:(id)arg5;
+ (id)labelStyleWithColor:(id)arg1 font:(id)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4;
@property(retain, nonatomic) id <HKNumberFormatter> numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

