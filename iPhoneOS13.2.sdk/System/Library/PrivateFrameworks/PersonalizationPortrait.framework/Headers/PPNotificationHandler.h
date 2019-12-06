//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface PPNotificationHandler : NSObject
{
//    struct atomic_flag _isFiring;
//    struct atomic_flag _hasWaiter;
    double _waitSeconds;
    NSMapTable *_blockMap;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMapTable *blockMap; // @synthesize blockMap=_blockMap;
@property(nonatomic) double waitSeconds; // @synthesize waitSeconds=_waitSeconds;
// - (void).cxx_destruct;
- (id)description;
- (void)addObserverBlock:(CDUnknownBlockType)arg1 forLifetimeOfObject:(id)arg2;
- (void)fire;
- (void)_clearFlags;
- (void)_executeBlocks;
- (id)initWithName:(id)arg1 waitSeconds:(double)arg2;

@end

