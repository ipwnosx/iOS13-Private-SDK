//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSDate, NSDictionary;

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate
{
    BOOL _shouldTruncateHeaderLeadingLabelFirst;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_bodyTextProvider;
    CLKTextProvider *_headerTrailingTextProvider;
    NSDictionary *_additionalContentAttributes;
}

@property(copy, nonatomic) NSDictionary *additionalContentAttributes; // @synthesize additionalContentAttributes=_additionalContentAttributes;
@property(nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst; // @synthesize shouldTruncateHeaderLeadingLabelFirst=_shouldTruncateHeaderLeadingLabelFirst;
@property(copy, nonatomic) CLKTextProvider *headerTrailingTextProvider; // @synthesize headerTrailingTextProvider=_headerTrailingTextProvider;
@property(copy, nonatomic) CLKTextProvider *bodyTextProvider; // @synthesize bodyTextProvider=_bodyTextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSDate *contentDate;
- (void)_enumerateDateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

