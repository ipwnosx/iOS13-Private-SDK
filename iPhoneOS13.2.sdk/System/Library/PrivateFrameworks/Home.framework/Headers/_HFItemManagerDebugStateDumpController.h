//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject
{
    NSHashTable *_itemManagers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *itemManagers; // @synthesize itemManagers=_itemManagers;
// - (void).cxx_destruct;
- (id)_performStateDump;
- (void)registerItemManager:(id)arg1;
- (id)init;

@end

