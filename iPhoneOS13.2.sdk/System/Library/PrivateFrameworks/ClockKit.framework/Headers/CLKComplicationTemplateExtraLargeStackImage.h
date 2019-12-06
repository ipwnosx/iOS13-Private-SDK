//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeStackImage : CLKComplicationTemplate
{
    CLKImageProvider *_line1ImageProvider;
    CLKTextProvider *_line2TextProvider;
    NSUInteger _highlightMode;
}

+ (CGSize)imageSize;
@property(nonatomic) NSUInteger highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKImageProvider *line1ImageProvider; // @synthesize line1ImageProvider=_line1ImageProvider;
// - (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
@property(nonatomic) BOOL highlightLine2;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

