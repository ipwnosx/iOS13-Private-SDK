//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKOlympusMask : NSObject
{
}

+ (NSUInteger)quadrantForPoint:(CGPoint)arg1;
+ (NSUInteger)quadrantForAngle:(double)arg1;
+ (double)convertAngleForFirstQuadrant:(double)arg1;
+ (CGPoint)nextPointFromStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 radius:(double)arg3;
+ (NSUInteger)nextQuadrantIndex:(NSUInteger)arg1;
+ (CGPoint)convertPoint:(CGPoint)arg1 translantedFromFirstToQuadrantIndex:(NSUInteger)arg2;
+ (CGPoint)convertPoint:(CGPoint)arg1 translantedQuadrantIndex:(NSUInteger)arg2;
+ (CGPoint)convertPointFromCartesianCoordiatesToViewCoordiates:(CGPoint)arg1 centerFromViewCoordinates:(CGPoint)arg2;
+ (CGPoint)convertPointFromViewCoordinatesToCartesianCoordiates:(CGPoint)arg1 centerFromViewCoordinates:(CGPoint)arg2;
+ (CGPoint)pointForAngle:(double)arg1 radius:(double)arg2 centerPoint:(CGPoint)arg3;
+ (double)minuteHandAngleWithDate:(id)arg1;
+ (double)hourHandAngleWithDate:(id)arg1;
+ (double)angleForMinute:(NSUInteger)arg1 seconds:(NSUInteger)arg2;
+ (double)angleForHour:(NSUInteger)arg1 minutes:(NSUInteger)arg2;
+ (CGPoint)roundPoint:(CGPoint)arg1;
+ (id)clippingPathFromCenterPoint:(CGPoint)arg1 startAngle:(double)arg2 endAngle:(double)arg3 radius:(double)arg4;
+ (double)normalizeAngle:(double)arg1;

@end

