//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularStackImage : CLKComplicationTemplateGraphicCircular
{
    CLKFullColorImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
}

@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKFullColorImageProvider *line1ImageProvider; // @synthesize line1ImageProvider=_line1ImageProvider;
// - (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end

