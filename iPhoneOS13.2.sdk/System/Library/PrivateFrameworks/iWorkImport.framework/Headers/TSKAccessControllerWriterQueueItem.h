//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

__attribute__((visibility("hidden")))
@interface TSKAccessControllerWriterQueueItem : NSObject
{
    NSThread _threadIdentifier;
}

+ (id)priorityPrimaryThreadWriterQueueItemForAccessController:(id)arg1;
+ (id)writerQueueItemWithThreadIdentifier:(NSThread )arg1;
@property(readonly, nonatomic) NSThread *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL didTakePriority;
- (id)initWithThreadIdentifier:(NSThread )arg1;

@end

