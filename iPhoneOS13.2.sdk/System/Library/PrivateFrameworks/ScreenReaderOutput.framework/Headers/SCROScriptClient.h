//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, SCRCTargetSelectorTimer, SCROConnection;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject
{
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
    NSObject<OS_dispatch_queue> *__scriptDispatchQueue;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue; // @synthesize _scriptDispatchQueue=__scriptDispatchQueue;
// - (void).cxx_destruct;
- (BOOL)runScriptFile:(id)arg1;
- (void)handleCallback:(id)arg1;
- (BOOL)_isReady;
- (id)_lazyConnection;
- (void)_killConnection;
- (void)dealloc;
- (id)init;

@end

