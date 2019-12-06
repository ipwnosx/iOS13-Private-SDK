//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDShadow.h>

__attribute__((visibility("hidden")))
@interface TSDDropShadow : TSDShadow
{
}

//  (id)instanceWithArchive:(const struct ShadowArchive )arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (CGRect)boundsForRep:(id)arg1;
- (CGRect)boundsInNaturalSpaceForRep:(id)arg1;
- (id)newShadowClampedForSwatches;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)shadowType;
- (id)initWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(id)arg5 enabled:(BOOL)arg6;
//  (void)saveToArchive:(struct ShadowArchive )arg1 archiver:(id)arg2;
//  (id)initWithArchive:(const struct ShadowArchive )arg1 unarchiver:(id)arg2;

@end

