//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFCloudKitTask : NSObject
{
    BOOL _cancelled;
    id /* CDUnknownBlockType */ _cancellationHandler;
}

@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
// - (void).cxx_destruct;
- (void)cancel;

@end

