//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REClassLoader.h>

@class NSArray;

@interface REObjectClassLoader : REClassLoader
{
    NSArray *_objects;
}

// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithObjects:(id)arg1 configuration:(id)arg2;

@end

