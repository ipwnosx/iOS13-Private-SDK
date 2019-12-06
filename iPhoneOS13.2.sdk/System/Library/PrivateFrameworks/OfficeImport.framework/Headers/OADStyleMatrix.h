//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject
{
    NSString *mName;
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(NSUInteger)arg2 defaultValue:(id)arg3;
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (void)validateStyleMatrix;
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;
- (id)bgFillAtIndex:(NSUInteger)arg1;
- (NSUInteger)bgFillCount;
- (void)addBgFill:(id)arg1;
- (id)effectsAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (id)effectsAtIndex:(NSUInteger)arg1;
- (NSUInteger)effectsCount;
- (void)addEffects:(id)arg1;
- (id)strokeAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (id)strokeAtIndex:(NSUInteger)arg1;
- (NSUInteger)strokeCount;
- (void)addStroke:(id)arg1;
- (id)fillAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (id)fillAtIndex:(NSUInteger)arg1;
- (NSUInteger)fillCount;
- (void)addFill:(id)arg1;
- (id)init;

@end

