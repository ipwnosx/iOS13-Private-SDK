//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUStdioLogSink : NSObject
{
    NSObject<OS_dispatch_queue> *_logQueue;
    NSDateFormatter *_dateFormatter;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
// - (CDUnknownBlockType)logSinkBlockWithFilePointer:(struct __sFILE )arg1;
- (id)init;

@end

