//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallRingImage : CLKComplicationTemplate
{
    float _fillFraction;
    CLKImageProvider *_imageProvider;
    long long _ringStyle;
}

+ (CGSize)_imageSize;
@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
// - (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

