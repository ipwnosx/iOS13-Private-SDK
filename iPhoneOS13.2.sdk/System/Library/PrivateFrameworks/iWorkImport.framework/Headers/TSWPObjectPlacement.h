//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUUUIDPath;

__attribute__((visibility("hidden")))
@interface TSWPObjectPlacement : NSObject
{
    int _index;
    TSUUUIDPath *_uuidPath;
    NSObject *_object;
}

+ (id)objectPlacementWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;
@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(retain, nonatomic) TSUUUIDPath *uuidPath; // @synthesize uuidPath=_uuidPath;
// - (void).cxx_destruct;
- (id)initWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;

@end

