//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentStyleRendererFactory-Protocol.h>

@class SXViewport;
@protocol SXGradientFactory, SXImageFillViewFactory, SXRepeatableImageFillViewFactory, SXVideoFillViewFactory;

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory>
{
    id <SXImageFillViewFactory> _imageFillViewFactory;
    id <SXVideoFillViewFactory> _videoFillViewFactory;
    id <SXGradientFactory> _gradientFactory;
    id <SXRepeatableImageFillViewFactory> _repeatableImageFillViewFactory;
    SXViewport *_viewport;
}

@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) id <SXRepeatableImageFillViewFactory> repeatableImageFillViewFactory; // @synthesize repeatableImageFillViewFactory=_repeatableImageFillViewFactory;
@property(readonly, nonatomic) id <SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property(readonly, nonatomic) id <SXVideoFillViewFactory> videoFillViewFactory; // @synthesize videoFillViewFactory=_videoFillViewFactory;
@property(readonly, nonatomic) id <SXImageFillViewFactory> imageFillViewFactory; // @synthesize imageFillViewFactory=_imageFillViewFactory;
// - (void).cxx_destruct;
- (id)componentStyleRendererForComponentStyle:(id)arg1;
- (id)initWithImageFillViewFactory:(id)arg1 videoFillViewFactory:(id)arg2 gradientFactory:(id)arg3 repeatableImageFillViewFactory:(id)arg4 viewport:(id)arg5;

@end

