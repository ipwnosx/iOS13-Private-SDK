//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVectorTextLayoutParameters-Protocol.h>

@class NSAttributedString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutParameters : NSObject <_UIVectorTextLayoutParameters, NSCopying>
{
    NSAttributedString *_attributedText;
    NSUInteger _numberOfLines;
    UITraitCollection *_traitCollection;
    long long _lineBreakMode;
    CGSize _withinSize;
}

+ (id)parametersSuitableForView:(id)arg1;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) CGSize withinSize; // @synthesize withinSize=_withinSize;
@property(nonatomic) NSUInteger numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
// - (void).cxx_destruct;
- (BOOL)isEqualToParameters:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_copyFromParameters:(id)arg1;
- (id)initWithParameters:(id)arg1;

@end

