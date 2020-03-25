//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPrioritizedTileKeys : NSObject
{
    void _keysAndPriorities;
}

- (void)removeKey:(const struct _GEOTileKey )arg1;
- (BOOL)popHighestPriorityKey:(struct _GEOTileKey )arg1 priority:(unsigned int )arg2;
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, nonatomic) unsigned int highestPriority;
- (void)setPriority:(unsigned int)arg1 forKey:(const struct _GEOTileKey )arg2;
- (void)dealloc;
- (id)initWithKeys:(id)arg1 priorities:(id)arg2;
- (id)init;

@end
