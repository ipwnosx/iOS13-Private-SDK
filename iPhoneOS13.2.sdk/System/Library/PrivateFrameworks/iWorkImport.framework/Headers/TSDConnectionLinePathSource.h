//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDBezierPathSource.h>

#import <iWorkImport/TSDSmartPathSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>
{
    int mType;
    double mOutsetFrom;
    double mOutsetTo;
}

+ (id)pathSourceAtAngleOfSize:(CGSize)arg1 forType:(int)arg2;
+ (id)pathSourceOfLength:(double)arg1;
@property(nonatomic) double outsetTo; // @synthesize outsetTo=mOutsetTo;
@property(nonatomic) double outsetFrom; // @synthesize outsetFrom=mOutsetFrom;
@property(nonatomic) int type; // @synthesize type=mType;
- (id)description;
- (void)p_setBezierPath:(id)arg1;
- (BOOL)isLineSegment;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (CGPoint)fixedPointForControlKnobChange;
- (id)bezierPath;
- (CGPoint)getControlKnobPosition:(NSUInteger)arg1;
- (long long)pathElementIndexForKnobTag:(NSUInteger)arg1;
- (NSUInteger)numberOfControlKnobs;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)bend;
- (id)initWithBezierPath:(id)arg1;
// - (void)saveToArchive:(struct PathSourceArchive )arg1;
// - (id)initWithArchive:(const struct PathSourceArchive )arg1;

@end

