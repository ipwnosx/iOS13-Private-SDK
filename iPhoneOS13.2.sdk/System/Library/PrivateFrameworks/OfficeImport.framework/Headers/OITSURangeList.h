//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURangeList : NSObject
{
//     struct vector<NSRange *, std::__1::allocator<NSRange *>> mRangeList;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)stringValue;
- (void)consolidate;
- (NSRange *)rangeAtIndex:(NSUInteger)arg1;
- (void)reverse;
- (void)replaceWithRange:(NSRange *)arg1 atIndex:(NSUInteger)arg2;
- (void)removeRangeAtIndex:(NSUInteger)arg1;
- (void)insertRange:(NSRange *)arg1 atIndex:(NSUInteger)arg2;
- (void)addRange:(NSRange *)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithString:(id)arg1;
- (id)initWithRangeList:(id)arg1;
- (id)initWithRange:(NSRange *)arg1;

@end

