//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebFixedPositionContent : NSObject
{
//     struct WebFixedPositionContentData _private;
}

- (BOOL)hasFixedOrStickyPositionLayers;
- (void)setViewportConstrainedLayers:(HashMap_8e3a669a )arg1 stickyContainerMap:(const HashMap_9d18c561 )arg2;
- (void)didFinishScrollingOrZooming;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(CGPoint)arg2;
- (void)scrollOrZoomChanged:(CGRect)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

