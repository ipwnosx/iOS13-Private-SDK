//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IntArray2D : NSObject
{
    long long _arrayData;
    NSUInteger _iSize;
    NSUInteger _jSize;
    BOOL _shouldBoundsCheck;
}

+ (id)arrayWithISize:(NSUInteger)arg1 jSize:(NSUInteger)arg2;
@property(nonatomic) BOOL shouldBoundsCheck; // @synthesize shouldBoundsCheck=_shouldBoundsCheck;
@property(readonly, nonatomic) NSUInteger jSize; // @synthesize jSize=_jSize;
@property(readonly, nonatomic) NSUInteger iSize; // @synthesize iSize=_iSize;
- (void):(NSUInteger)arg1:(NSUInteger)arg2 newValue:(long long)arg3;
- (long long):(NSUInteger)arg1:(NSUInteger)arg2 outOfBoundsReturnValue:(long long)arg3;
- (long long):(NSUInteger)arg1:(NSUInteger)arg2;
- (void)assertBoundsForIIndex:(NSUInteger)arg1 jIndex:(NSUInteger)arg2;
- (BOOL)inBoundsForIIndex:(NSUInteger)arg1 jIndex:(NSUInteger)arg2;
- (id)initWithISize:(NSUInteger)arg1 jSize:(NSUInteger)arg2;
- (id)description;
- (void)dealloc;

@end

