//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface NSManagedObjectContext (IC)
- (void)ic_performBlockAndWait:(CDUnknownBlockType)arg1 andPerformBlockAndWaitOnMainThread:(CDUnknownBlockType)arg2;
- (void)ic_performBlock:(CDUnknownBlockType)arg1 andPerformBlockOnMainThread:(CDUnknownBlockType)arg2;
- (BOOL)ic_saveWithLogDescription:(id)arg1;
- (BOOL)ic_save;
@property(readonly, nonatomic) BOOL ic_isMainThreadContext;
@property(retain, nonatomic) NSString *ic_debugName;
@end

