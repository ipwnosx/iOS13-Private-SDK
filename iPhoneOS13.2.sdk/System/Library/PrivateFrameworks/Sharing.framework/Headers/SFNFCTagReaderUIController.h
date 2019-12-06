//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUXPCAgent, CUXPCAgentConnection, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFNFCTagReaderUIController : NSObject
{
    BOOL _activateCalled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    long long _nfcTagScanCount;
    BOOL _nfcTagScanPending;
    CUXPCAgent *_xpcAgent;
    NSXPCConnection *_xpcCnx;
    CUXPCAgentConnection *_xpcUICnx;
    id /* CDUnknownBlockType */ _invalidationHandler;
    long long _mode;
    NSString *_purpose;
}

@property(copy, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)uiInvalidatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)uiActivatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_nfcTagScannedCount;
- (void)nfcTagScannedCount:(long long)arg1;
- (void)nfcTagScanned;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

