//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSURectList : NSObject
{
//     struct vector<CGRect, std::__1::allocator<CGRect>> mRectList;
}

+ (id)rectListWithDifference:(CGRect)arg1 withRect:(CGRect)arg2;
+ (id)rectListWithRect:(CGRect)arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (CGRect)rectAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRectList:(id)arg1;
- (id)initWithRect:(CGRect)arg1;

@end

