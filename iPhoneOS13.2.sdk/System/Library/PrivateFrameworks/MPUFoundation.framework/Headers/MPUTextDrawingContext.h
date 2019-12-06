//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSString, NSStringDrawingContext, UIImage;

@interface MPUTextDrawingContext : NSObject
{
    NSString *_text;
    NSAttributedString *_attributedText;
    NSStringDrawingContext *_stringDrawingContext;
    long long _stringDrawingOptions;
    NSDictionary *_uniformTextAttributes;
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
    UIImage *_image;
    CGSize _boundingSize;
}

@property(retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image; // @synthesize image=_image;
@property(nonatomic, setter=_setLastBaselineOffsetFromBottom:) double lastBaselineOffsetFromBottom; // @synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom;
@property(nonatomic, setter=_setFirstBaselineOffsetFromTop:) double firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
@property(nonatomic, setter=_setBoundingSize:) CGSize boundingSize; // @synthesize boundingSize=_boundingSize;
@property(copy, nonatomic, setter=_setUniformTextAttributes:) NSDictionary *uniformTextAttributes; // @synthesize uniformTextAttributes=_uniformTextAttributes;
@property(nonatomic, setter=_setStringDrawingOptions:) long long stringDrawingOptions; // @synthesize stringDrawingOptions=_stringDrawingOptions;
@property(retain, nonatomic, setter=_setStringDrawingContext:) NSStringDrawingContext *stringDrawingContext; // @synthesize stringDrawingContext=_stringDrawingContext;
@property(copy, nonatomic, setter=_setAttributedText:) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;

@end

