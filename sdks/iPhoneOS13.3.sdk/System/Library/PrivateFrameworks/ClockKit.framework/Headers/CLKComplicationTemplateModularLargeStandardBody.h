//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate
{
    BOOL _shouldTruncateHeaderLeadingLabelFirst;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKTextProvider *_body2TextProvider;
    CLKImageProvider *_headerImageProvider;
    CLKImageProvider *_body1ImageProvider;
    CLKTextProvider *_headerTrailingTextProvider;
}

@property(nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst; // @synthesize shouldTruncateHeaderLeadingLabelFirst=_shouldTruncateHeaderLeadingLabelFirst;
@property(copy, nonatomic) CLKTextProvider *headerTrailingTextProvider; // @synthesize headerTrailingTextProvider=_headerTrailingTextProvider;
@property(copy, nonatomic) CLKImageProvider *body1ImageProvider; // @synthesize body1ImageProvider=_body1ImageProvider;
@property(copy, nonatomic) CLKImageProvider *headerImageProvider; // @synthesize headerImageProvider=_headerImageProvider;
@property(copy, nonatomic) CLKTextProvider *body2TextProvider; // @synthesize body2TextProvider=_body2TextProvider;
@property(copy, nonatomic) CLKTextProvider *body1TextProvider; // @synthesize body1TextProvider=_body1TextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
// - (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end
