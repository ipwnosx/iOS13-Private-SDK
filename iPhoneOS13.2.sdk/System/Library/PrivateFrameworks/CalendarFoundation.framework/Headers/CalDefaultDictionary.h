//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying>
{
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

// - (void).cxx_destruct;
- (id)finalDictionary;
- (void)setDictionary:(id)arg1;
- (NSUInteger)count;
- (id)keys;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (id)existingObjectForKey:(id)arg1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(_NSZone )arg1 isDeepCopy:(BOOL)arg2;
// - (id)_copyWithZone:(_NSZone )arg1 isDeepCopy:(BOOL)arg2;
- (id)deepCopy;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDefaultClass:(Class)arg1;

@end

