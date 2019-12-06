//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCSEngine;

@interface MMCSRequestorContext : NSObject
{
    int _type;
    MMCSEngine *_engine;
    char _signatures;
    NSUInteger _count;
    NSUInteger _itemIDs;
    unsigned int _itemFlags;
    char _authTokens;
}

+ (id)contextWithEngine:(id)arg1 type:(int)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) char authTokens; // @synthesize authTokens=_authTokens;
@property(nonatomic) unsigned int itemFlags; // @synthesize itemFlags=_itemFlags;
@property(nonatomic) NSUInteger itemIDs; // @synthesize itemIDs=_itemIDs;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
@property(nonatomic) char signatures; // @synthesize signatures=_signatures;
@property(nonatomic) __weak MMCSEngine *engine; // @synthesize engine=_engine;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithEngine:(id)arg1 type:(int)arg2;

@end

