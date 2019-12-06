//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;
@protocol UICoordinateSpace;

@interface CSRegion : NSObject <NSCopying, UICoordinateSpace>
{
    BOOL _hidden;
    BOOL _reservedForHorizontalScrolling;
    NSString *_identifier;
    long long _role;
    id <UICoordinateSpace> _coordinateSpace;
    id <UICoordinateSpace> _identity;
    id _provider;
    CGRect _extent;
}

+ (id)regionForCoordinateSpace:(id)arg1 withExtent:(CGRect)arg2;
+ (id)regionForCoordinateSpace:(id)arg1;
@property(nonatomic, getter=isReservedForHorizontalScrolling) BOOL reservedForHorizontalScrolling; // @synthesize reservedForHorizontalScrolling=_reservedForHorizontalScrolling;
@property(nonatomic) __weak id provider; // @synthesize provider=_provider;
@property(nonatomic) __weak id <UICoordinateSpace> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) CGRect extent; // @synthesize extent=_extent;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) CGRect bounds;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)intersectsCoordinateSpace:(id)arg1;
- (id)role:(long long)arg1;
- (id)regionForCoordinateSpace:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 withExtent:(CGRect)arg2 role:(long long)arg3;

@end

