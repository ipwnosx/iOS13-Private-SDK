//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject
{
    PLPhotoLibraryBundle *_bundle;
    NSUInteger _priority;
}

@property(readonly, nonatomic) NSUInteger priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) PLPhotoLibraryBundle *bundle; // @synthesize bundle=_bundle;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBundle:(id)arg1 priority:(NSUInteger)arg2;

@end

