//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface _TVUberBlurImageDecorator : TVImageDecorator
{
    UIColor *_gradientColor;
    NSUInteger _blurType;
    NSUInteger _blurStyle;
}

@property(nonatomic) NSUInteger blurStyle; // @synthesize blurStyle=_blurStyle;
@property(nonatomic) NSUInteger blurType; // @synthesize blurType=_blurType;
@property(retain, nonatomic) UIColor *gradientColor; // @synthesize gradientColor=_gradientColor;
// - (void).cxx_destruct;
- (id)decoratorIdentifier;
- (id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3;

@end

