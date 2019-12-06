//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class STKAlertSessionEventQueue;
@protocol OS_os_log;

@interface STKAlertSessionManager : NSObject
{
    NSObject<OS_os_log> *_log;
    STKAlertSessionEventQueue *_eventQueue;
}

@property(readonly, nonatomic) STKAlertSessionEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
// - (void).cxx_destruct;
- (void)enqueuePresentationForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willPresentAlertHandle:(id)arg1;
- (id)remoteAlertDescriptorForSession:(id)arg1;
- (id)initWithEventQueue:(id)arg1 logger:(id)arg2;

@end

