//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSTStrokeLayer;

@protocol TSTCustomStrokeProviding <NSObject>
- (TSTStrokeLayer *)strokeLayerForBottomOfRow:(unsigned int)arg1;
- (TSTStrokeLayer *)strokeLayerForTopOfRow:(unsigned int)arg1;
- (TSTStrokeLayer *)strokeLayerForRightSideOfColumn:(unsigned short)arg1;
- (TSTStrokeLayer *)strokeLayerForLeftSideOfColumn:(unsigned short)arg1;
@end

