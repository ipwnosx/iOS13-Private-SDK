//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject
{
    BOOL _memoizesNil;
    NSMutableDictionary *__dictionary;
}

@property(readonly, nonatomic) NSMutableDictionary *_dictionary; // @synthesize _dictionary=__dictionary;
@property(readonly, nonatomic) BOOL memoizesNil; // @synthesize memoizesNil=_memoizesNil;
// - (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1 memoizationBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithMemoizesNil:(BOOL)arg1;

@end

