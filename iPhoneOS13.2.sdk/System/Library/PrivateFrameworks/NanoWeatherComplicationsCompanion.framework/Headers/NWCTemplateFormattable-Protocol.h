//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLKComplicationTemplate, CLKDevice;
@protocol NWCTemplateFormattable;

@protocol NWCTemplateFormattable <NSObject>
+ (id <NWCTemplateFormattable>)sharedFormatter;
- (CLKComplicationTemplate *)switcherTemplateWithFamily:(long long)arg1;
- (BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(CLKDevice *)arg2;
@end

