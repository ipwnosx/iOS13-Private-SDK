//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol InterfaceListenerDelegate;

@interface GKInterfaceListener : NSObject
{
//     struct __SCDynamicStore _dynamicStore;
//     struct _opaque_pthread_mutex_t _notificationMutex;
    id _interfaceListenerDelegate;
    BOOL _isWifiUp;
    BOOL _isCellUp;
    int _notifyToken;
    BOOL _monitoringAvailable;
}

@property BOOL _isCellUp; // @synthesize _isCellUp;
@property BOOL _isWifiUp; // @synthesize _isWifiUp;
@property id <InterfaceListenerDelegate> interfaceListenerDelegate;
- (void)stopRoutingChangeListener;
- (BOOL)startRoutingChangeListener;
- (BOOL)stopChangeListener;
- (BOOL)startChangeListener;
- (void)hasConnectionWithWifi:(BOOL )arg1 cell:(BOOL )arg2;
- (void)dealloc;
- (id)init;

@end

