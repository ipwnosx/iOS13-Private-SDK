//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject
{
    SCKAsyncSerialQueue *_startupTaskQueue;
}

@property(retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue; // @synthesize startupTaskQueue=_startupTaskQueue;
// - (void).cxx_destruct;
- (void)executeAfterStartup:(CDUnknownBlockType)arg1;
- (void)enqueueStartupBlock:(CDUnknownBlockType)arg1;
- (id)initWithDeferredStartup:(BOOL)arg1;

@end

