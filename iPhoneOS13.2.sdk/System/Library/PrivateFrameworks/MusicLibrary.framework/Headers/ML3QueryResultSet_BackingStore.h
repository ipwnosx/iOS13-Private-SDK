//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_bbba3654 _persistentIDs;
//    struct vector<unsigned char, std::__1::allocator<unsigned char>> _sections;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_da619913 )arg1;
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsPersistentIDs:(const unordered_set_da619913 )arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger count;

@end

