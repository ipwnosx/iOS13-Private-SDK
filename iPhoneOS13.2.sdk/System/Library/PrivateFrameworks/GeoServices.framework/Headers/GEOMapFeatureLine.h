//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapFeatureLine : NSObject
{
//     CDStruct_c3b9c2ee _coordinates;
    NSUInteger _coordinateCount;
    double _length;
    BOOL _isFlipped;
}

@property(readonly, nonatomic) double length;
@property(readonly, nonatomic) NSUInteger coordinateCount;
// @property(readonly, nonatomic) CDStruct_c3b9c2ee coordinates;
- (void)dealloc;
- (id)init;
// - (CDStruct_6e3f967a )_tilePointsForSection:(NSUInteger)arg1 withCount:(out NSUInteger )arg2;
- (id)_containingTile;

@end

