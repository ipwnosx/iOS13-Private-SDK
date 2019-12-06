//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TPDrawablesZOrder : TSPObject
{
    NSMutableArray *_drawables;
}

// - (void).cxx_destruct;
- (id)orderedDrawables:(id)arg1;
- (void)swapDrawableAtZOrder:(NSUInteger)arg1 withDrawableAtZOrder:(NSUInteger)arg2;
- (void)moveDrawables:(id)arg1 toZOrder:(NSUInteger)arg2;
- (void)moveDrawable:(id)arg1 toZOrder:(NSUInteger)arg2;
- (void)moveDrawableAtZOrder:(NSUInteger)arg1 toZOrder:(NSUInteger)arg2;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawableAtZOrder:(NSUInteger)arg1;
- (NSUInteger)insertDrawable:(id)arg1 atZOrder:(NSUInteger)arg2;
- (NSUInteger)addDrawable:(id)arg1;
- (void)moveDrawables:(id)arg1 toIndexes:(id)arg2;
- (NSUInteger)zOrderOfDrawable:(id)arg1;
- (id)drawableAtZOrder:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger drawableCount;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)drawableEnumerator;

@end

