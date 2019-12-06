//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate
{
    BOOL _useNoColumnPadding;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_row1Column1TextProvider;
    CLKTextProvider *_row1Column2TextProvider;
    CLKTextProvider *_row2Column1TextProvider;
    CLKTextProvider *_row2Column2TextProvider;
    CLKImageProvider *_headerImageProvider;
    long long _column2Alignment;
}

@property(nonatomic) BOOL useNoColumnPadding; // @synthesize useNoColumnPadding=_useNoColumnPadding;
@property(nonatomic) long long column2Alignment; // @synthesize column2Alignment=_column2Alignment;
@property(copy, nonatomic) CLKImageProvider *headerImageProvider; // @synthesize headerImageProvider=_headerImageProvider;
@property(copy, nonatomic) CLKTextProvider *row2Column2TextProvider; // @synthesize row2Column2TextProvider=_row2Column2TextProvider;
@property(copy, nonatomic) CLKTextProvider *row2Column1TextProvider; // @synthesize row2Column1TextProvider=_row2Column1TextProvider;
@property(copy, nonatomic) CLKTextProvider *row1Column2TextProvider; // @synthesize row1Column2TextProvider=_row1Column2TextProvider;
@property(copy, nonatomic) CLKTextProvider *row1Column1TextProvider; // @synthesize row1Column1TextProvider=_row1Column1TextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
// - (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

