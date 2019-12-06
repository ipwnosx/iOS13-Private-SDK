//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject
{
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    CGPoint _contactPoint;
    CGVector _contactNormal;
    double _impulse;
    BOOL _didBegin;
    BOOL _didEnd;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) double collisionImpulse;
@property(readonly, nonatomic) CGVector contactNormal;
@property(readonly, nonatomic) CGPoint contactPoint;
@property(readonly, nonatomic) PKPhysicsBody *bodyB;
@property(readonly, nonatomic) PKPhysicsBody *bodyA;
@property BOOL didEnd;
@property BOOL didBegin;
- (id)init;

@end

