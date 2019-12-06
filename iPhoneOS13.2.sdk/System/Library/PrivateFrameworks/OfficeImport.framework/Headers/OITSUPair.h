//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface OITSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    id mFirst;
    id mSecond;
}

+ (id)pair;
+ (id)pairWithPair:(id)arg1;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(readonly, nonatomic) id second; // @synthesize second=mSecond;
@property(readonly, nonatomic) id first; // @synthesize first=mFirst;
- (void)p_SetSecond:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPair:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

