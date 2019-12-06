//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKSectionPresentationData : NSObject
{
    long long _section;
    double _headerMinY;
    double _headerMaxY;
    double _itemsMinY;
    double _itemsMaxY;
    double _footerMinY;
    double _footerMaxY;
    double _minY;
    double _maxY;
    double _showMoreMaxY;
    NSUInteger _numHeaders;
    NSUInteger _numFooters;
    NSUInteger _numOverlays;
    NSUInteger _numItems;
    NSUInteger _overlayOffset;
}

@property(nonatomic) NSUInteger overlayOffset; // @synthesize overlayOffset=_overlayOffset;
@property(nonatomic) NSUInteger numItems; // @synthesize numItems=_numItems;
@property(nonatomic) NSUInteger numOverlays; // @synthesize numOverlays=_numOverlays;
@property(nonatomic) NSUInteger numFooters; // @synthesize numFooters=_numFooters;
@property(nonatomic) NSUInteger numHeaders; // @synthesize numHeaders=_numHeaders;
@property(nonatomic) double showMoreMaxY; // @synthesize showMoreMaxY=_showMoreMaxY;
@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(nonatomic) double minY; // @synthesize minY=_minY;
@property(nonatomic) double footerMaxY; // @synthesize footerMaxY=_footerMaxY;
@property(nonatomic) double footerMinY; // @synthesize footerMinY=_footerMinY;
@property(nonatomic) double itemsMaxY; // @synthesize itemsMaxY=_itemsMaxY;
@property(nonatomic) double itemsMinY; // @synthesize itemsMinY=_itemsMinY;
@property(nonatomic) double headerMaxY; // @synthesize headerMaxY=_headerMaxY;
@property(nonatomic) double headerMinY; // @synthesize headerMinY=_headerMinY;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void)updateWithLayoutAttributes:(id)arg1 supplementaryLocation:(NSUInteger)arg2;
- (id)description;
- (id)initWithSection:(long long)arg1 presentationData:(id)arg2;

@end

