//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentStyleRenderer-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class SXViewport, UIView;
@protocol SXGradientFactory;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>
{
    SXViewport *_viewport;
    id <SXGradientFactory> _gradientFactory;
    UIView *_topBackgroundView;
}

@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(readonly, nonatomic) id <SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
// - (void).cxx_destruct;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2;
- (void)layoutTopBackgroundView;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (id)initWithViewport:(id)arg1 gradientFactory:(id)arg2;

@end

