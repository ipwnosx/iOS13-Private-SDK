//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DResource;

__attribute__((visibility("hidden")))
@interface TSCH3DPrimitiveInfo : NSObject
{
    int _type;
    int _offset;
    unsigned int _count;
    TSCH3DResource *_indices;
}

+ (id)infoWithType:(int)arg1;
+ (id)infoWithType:(int)arg1 offset:(int)arg2 count:(unsigned int)arg3 indices:(id)arg4;
@property(readonly, retain, nonatomic) TSCH3DResource *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasEmptyCount;
@property(readonly, nonatomic) BOOL hasCount;
@property(readonly, nonatomic) BOOL hasOffset;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 offset:(int)arg2 count:(unsigned int)arg3 indices:(id)arg4;

@end

