//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying>
{
    vector_e3deae5b _rangeVector;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)dirtyRangesIntersecting:(NSRange)arg1;
- (NSUInteger)indexForRange:(NSRange)arg1;
- (long long)delta;
- (NSRange)superRange;
- (BOOL)isEqualToDirtyRangeArray:(id)arg1;
- (CDStruct_9ae92562)dirtyRangeAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRangeVector:(const vector_e3deae5b )arg1;
- (id)initWithDirtyRange:(CDStruct_9ae92562)arg1;
- (id)init;

@end

