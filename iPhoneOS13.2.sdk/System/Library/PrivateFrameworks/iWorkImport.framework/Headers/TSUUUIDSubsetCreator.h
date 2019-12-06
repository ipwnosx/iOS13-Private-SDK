//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUUUIDSetStore;

__attribute__((visibility("hidden")))
@interface TSUUUIDSubsetCreator : NSObject
{
    TSUUUIDSetStore *_uuidSetStore;
    vector_4dc5f307 _baseUuidVector;
    NSMutableDictionary *_createdSubsetsByRange;
}

@property(readonly) TSUUUIDSetStore *uuidSetStore; // @synthesize uuidSetStore=_uuidSetStore;
@property(readonly) const vector_4dc5f307 baseUuidVector; // @synthesize baseUuidVector=_baseUuidVector;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(NSRange *)arg1;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector_4dc5f307 )arg2;

@end

