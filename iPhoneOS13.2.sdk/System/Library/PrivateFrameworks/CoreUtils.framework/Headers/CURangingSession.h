//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/PRSharingSessionDelegate-Protocol.h>

@class NSArray, NSString, PRContactWhitelist, PRSharingSession;
@protocol OS_dispatch_queue;

@interface CURangingSession : NSObject <PRSharingSessionDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersChanged;
    NSArray *_peersRanging;
    PRContactWhitelist *_prResponder;
    int _prRangingInitiated;
    PRSharingSession *_prRangingSession;
//    struct LogCategory _ucat;
    unsigned int _flags;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _errorHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
    id /* CDUnknownBlockType */ _measurementHandler;
    id /* CDUnknownBlockType */ _measurementHandlerEx;
    NSArray *_peers;
    id /* CDUnknownBlockType */ _statusChangedHandler;
}

@property(readonly, nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(copy, nonatomic) NSArray *peers; // @synthesize peers=_peers;
@property(copy, nonatomic) id /* CDUnknownBlockType */ measurementHandlerEx; // @synthesize measurementHandlerEx=_measurementHandlerEx;
@property(copy, nonatomic) id /* CDUnknownBlockType */ measurementHandler; // @synthesize measurementHandler=_measurementHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)session:(id)arg1 didChangeProximitySensorState:(NSUInteger)arg2;
- (void)session:(id)arg1 didFailwithError:(id)arg2;
- (void)session:(id)arg1 didEstimateScores:(id)arg2;
- (void)_updatePeers;
- (void)_updateResponder;
- (void)_updateInitiator;
- (void)_update;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void)addSample:(id)arg1;
- (void)dealloc;
- (id)init;

@end

