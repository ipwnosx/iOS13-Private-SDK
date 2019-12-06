//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderEffects : NSObject <NSCopying>
{
    NSMutableDictionary *mSections;
    NSArray *mCacheList;
}

// - (id)copyWithZone:(_NSZone )arg1;
- (void)injectMetalShaderInto:(id)arg1 context:(id)arg2;
- (void)injectGLSLInto:(id)arg1 context:(id)arg2;
- (void)addVariables:(id)arg1;
- (void)enumerateEffectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)resetSection:(int)arg1 toArray:(id)arg2;
- (void)resetSection:(int)arg1;
- (BOOL)isSectionEnabled:(int)arg1;
- (void)setEnable:(BOOL)arg1 forSection:(int)arg2;
- (void)addEffectOnce:(id)arg1 toSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1 toSection:(int)arg2;
- (void)addEffect:(id)arg1 toSection:(int)arg2;
- (void)prependEffect:(id)arg1 toSection:(int)arg2;
- (void)resetToArray:(id)arg1;
- (void)reset;
- (void)removeEffect:(id)arg1 fromSection:(int)arg2;
- (BOOL)removeEffectOfClass:(Class)arg1 fromSection:(int)arg2;
- (void)addEffectsFromArray:(id)arg1;
- (void)addEffect:(id)arg1;
- (void)prependEffect:(id)arg1;
@property(readonly, nonatomic) NSSet *identifier;
- (BOOL)isEqual:(id)arg1;
- (id)effects;
- (void)resetCacheList;
- (id)description;
- (void)dealloc;
- (id)init;

@end

