//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMScheduler-Protocol.h>

__attribute__((visibility("hidden")))
@interface _FMImmediateScheduler : NSObject <FMScheduler>
{
}

- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;

@end

