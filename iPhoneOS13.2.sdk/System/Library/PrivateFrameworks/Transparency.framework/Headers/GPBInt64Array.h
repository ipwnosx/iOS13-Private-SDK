//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBInt64Array : NSObject <NSCopying>
{
    GPBMessage *_autocreator;
    long long _values;
    NSUInteger _count;
    NSUInteger _capacity;
}

+ (id)arrayWithCapacity:(NSUInteger)arg1;
+ (id)arrayWithValueArray:(id)arg1;
+ (id)arrayWithValue:(long long)arg1;
+ (id)array;
@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
- (void)exchangeValueAtIndex:(NSUInteger)arg1 withValueAtIndex:(NSUInteger)arg2;
- (void)removeAll;
- (void)removeValueAtIndex:(NSUInteger)arg1;
- (void)addValuesFromArray:(id)arg1;
- (void)replaceValueAtIndex:(NSUInteger)arg1 withValue:(long long)arg2;
- (void)insertValue:(long long)arg1 atIndex:(NSUInteger)arg2;
- (void)addValues:(const long long )arg1 count:(NSUInteger)arg2;
- (void)addValue:(long long)arg1;
- (void)internalResizeToCapacity:(NSUInteger)arg1;
- (long long)valueAtIndex:(NSUInteger)arg1;
- (void)enumerateValuesWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithValues:(const long long )arg1 count:(NSUInteger)arg2;
- (id)initWithValueArray:(id)arg1;
- (id)init;

@end

