//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout;

@interface SXMosaicGalleryGroupLayout : NSObject
{
    double _height;
    NSMutableArray *_columnRanges;
    NSArray *_frames;
    NSUInteger _numberOfColumns;
    SXMosaicGalleryCluster *_cluster;
    SXMosaicGalleryColumnLayout *_columnLayout;
}

@property(readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
@property(readonly, nonatomic) SXMosaicGalleryCluster *cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) NSUInteger numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *columnRanges; // @synthesize columnRanges=_columnRanges;
- (NSRange *)columnRangeForItem:(id)arg1;
- (double)desiredHeightForItem:(id)arg1;
- (id)calculateFrames;
- (double)calculateHeight;
@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (CGRect)frameForItemAtIndex:(NSUInteger)arg1;
- (id)initWithCluster:(id)arg1 numberOfColumns:(NSUInteger)arg2 columnLayout:(id)arg3;
- (id)init;

@end

