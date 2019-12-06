//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface TSWPRangeArray : NSObject <NSCopying>
{
    void _rangeVectorOpaque;
}

- (id)description;
- (void)enumerateRangesInRange:(NSRange *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeRange:(NSRange *)arg1;
- (NSRange * )rangeReferenceAtIndex:(NSUInteger)arg1;
- (void)addRange:(NSRange *)arg1;
@property(readonly, nonatomic) NSUInteger start;
@property(readonly, nonatomic) NSUInteger finish;
@property(readonly, nonatomic) BOOL isEmpty;
- (NSRange *)rangeAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger rangeCount;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithRangeVector:(const void *)arg1;
- (id)initWithRange:(NSRange *)arg1;
- (id)init;

@end

