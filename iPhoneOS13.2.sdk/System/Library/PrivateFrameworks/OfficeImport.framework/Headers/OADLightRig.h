//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADLightRig : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setType:(int)arg1;
- (int)type;
- (void)setRotation:(id)arg1;
- (id)rotation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

