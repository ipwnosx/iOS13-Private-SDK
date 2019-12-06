//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer
{
    CGSize _outputSize;
    UIColor *_tintColor;
    BOOL _usesSaturationFilter;
}

@property(nonatomic) BOOL usesSaturationFilter; // @synthesize usesSaturationFilter=_usesSaturationFilter;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) CGSize outputSize; // @synthesize outputSize=_outputSize;
// - (void).cxx_destruct;
- (id)_saturationBackgroundImageWithSize:(CGSize)arg1;
- (id)imageForImage:(id)arg1;

@end

