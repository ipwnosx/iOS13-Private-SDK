//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXLayoutBlueprint;
@protocol SXDOMObjectProviding;

@protocol SXBlueprintAnalyzer <NSObject>
- (void)analyzeBlueprint:(SXLayoutBlueprint *)arg1 DOMObjectProvider:(id <SXDOMObjectProviding>)arg2 onMarkerFound:(NSUInteger (^)(id <SXBlueprintMarker>, NSUInteger))arg3 then:(NSUInteger (^)(NSUInteger))arg4 onEndReached:(NSUInteger (^)(void))arg5;
@end

