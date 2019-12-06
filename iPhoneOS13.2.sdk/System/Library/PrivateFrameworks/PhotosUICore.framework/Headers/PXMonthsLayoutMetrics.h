//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXMonthsLayoutMetrics : PXLayoutMetrics
{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultSectionAspectRatio;
    double _chapterHeaderHeight;
    UIEdgeInsets _padding;
    UIEdgeInsets _chapterHeaderPadding;
}

@property(nonatomic) UIEdgeInsets chapterHeaderPadding; // @synthesize chapterHeaderPadding=_chapterHeaderPadding;
@property(nonatomic) double chapterHeaderHeight; // @synthesize chapterHeaderHeight=_chapterHeaderHeight;
@property(nonatomic) UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double defaultSectionAspectRatio; // @synthesize defaultSectionAspectRatio=_defaultSectionAspectRatio;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

