//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessoryManager, NSString;
@protocol OS_dispatch_queue;

@interface CUMFiDeviceDiscovery : NSObject
{
    EAAccessoryManager *_eaManager;
//    struct LogCategory _ucat;
    id /* CDUnknownBlockType */ _deviceFoundHandler;
    id /* CDUnknownBlockType */ _deviceLostHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
// - (void).cxx_destruct;
- (void)_eaAccessoryDidDisconnect:(id)arg1;
- (void)_eaAccessoryDidConnect:(id)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

