//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol BCUPurgeableImage <NSObject>
@property(readonly, nonatomic) id layerContents;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) CGImageRef CGImage;
@property(readonly, nonatomic) double contentsScale;
- (BOOL)markAsNonVolatile;
- (BOOL)markAsVolatile;
@end

