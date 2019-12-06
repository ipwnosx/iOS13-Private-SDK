//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXEditorialLayoutMetrics : PXLayoutMetrics
{
    BOOL _useSaliency;
    BOOL _useNewImplementation;
    NSUInteger _numberOfColumns;
    double _interTileSpacing;
    double _headerHeight;
    NSUInteger _lowerItemCountThreshold;
    UIEdgeInsets _padding;
}

@property(nonatomic) BOOL useNewImplementation; // @synthesize useNewImplementation=_useNewImplementation;
@property(nonatomic) BOOL useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) NSUInteger lowerItemCountThreshold; // @synthesize lowerItemCountThreshold=_lowerItemCountThreshold;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) NSUInteger numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

