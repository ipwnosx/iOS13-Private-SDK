//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSInvalidatable-Protocol.h>
#import <CarPlayServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayServices/CRSIconLayoutClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSHashTable;
@protocol CRSIconLayoutServiceDelegate, OS_dispatch_queue;

@interface CRSIconLayoutService : NSObject <BSServiceConnectionListenerDelegate, CRSIconLayoutClientToServerInterface, BSInvalidatable>
{
    id <CRSIconLayoutServiceDelegate> _delegate;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_connections;
}

@property(retain, nonatomic) NSHashTable *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <CRSIconLayoutServiceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetIconStateForVehicleID:(id)arg1;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1;

@end

