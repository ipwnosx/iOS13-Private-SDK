//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSCH3DLens : NSObject <NSCopying>
{
    float mNear;
    float mFar;
}

+ (id)lens;
@property(nonatomic) float far; // @synthesize far=mFar;
@property(nonatomic) float near; // @synthesize near=mNear;
- (void)calculateCullingPlanes:(vector_5e6a89be )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

