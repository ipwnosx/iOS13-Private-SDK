//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, NSArray, NSData, NSString, NSURL, SFDeviceDiscovery, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillService : NSObject
{
    BOOL _activateCalled;
    id /* CDUnknownBlockType */ _activateCompletion;
    SFDeviceDiscovery *_discovery;
    int _discoveryState;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    NSString *_receivedPassword;
    NSString *_receivedUsername;
    BOOL _requestingAutoFill;
    SFService *_service;
    int _serviceState;
    SFSession *_session;
    NSData *_systemBTAddress;
    CUSystemMonitor *_systemMonitor;
    int _systemMonitorState;
    NSURL *_urlForVisualScanning;
    BOOL _unitTesting;
    NSArray *_associatedDomains;
    NSString *_bundleID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_fixedPIN;
    NSString *_localizedAppName;
    NSString *_unlocalizedAppName;
    NSString *_urlString;
    id /* CDUnknownBlockType */ _errorHandler;
    id /* CDUnknownBlockType */ _hidePINHandler;
    id /* CDUnknownBlockType */ _receivedCredentialsHandler;
    id /* CDUnknownBlockType */ _sessionStartedHandler;
    id /* CDUnknownBlockType */ _sessionEndedHandler;
    id /* CDUnknownBlockType */ _showPINHandlerEx;
    id /* CDUnknownBlockType */ _discoveredDevicesChanged;
    id /* CDUnknownBlockType */ _urlForVisualScanningChanged;
}

@property(nonatomic) BOOL unitTesting; // @synthesize unitTesting=_unitTesting;
@property(copy, nonatomic) id /* CDUnknownBlockType */ urlForVisualScanningChanged; // @synthesize urlForVisualScanningChanged=_urlForVisualScanningChanged;
@property(copy, nonatomic) id /* CDUnknownBlockType */ discoveredDevicesChanged; // @synthesize discoveredDevicesChanged=_discoveredDevicesChanged;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showPINHandlerEx; // @synthesize showPINHandlerEx=_showPINHandlerEx;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ receivedCredentialsHandler; // @synthesize receivedCredentialsHandler=_receivedCredentialsHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *unlocalizedAppName; // @synthesize unlocalizedAppName=_unlocalizedAppName;
@property(copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property(copy, nonatomic) NSString *fixedPIN; // @synthesize fixedPIN=_fixedPIN;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL needsSetup;
- (void)_bluetoothAddressChanged;
- (void)_systemMonitorStart;
- (void)_serviceSessionStarted:(id)arg1;
- (void)_serviceSessionEnded:(id)arg1 withError:(id)arg2;
- (void)_serviceHidePIN;
- (void)_serviceHandleReceivedRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceHandleReceivedCredentialRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceHandleReceivedContextRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceStart;
- (void)_discoveryChanged:(id)arg1;
- (void)_discoveryLost:(id)arg1;
- (void)_discoveryFound:(id)arg1;
- (void)_discoveryStart;
- (int)_readyForAutoFillRequest;
- (void)_completedWithError:(id)arg1;
@property(readonly, nonatomic) NSUInteger discoveredDevices;
- (void)updateURLForVisualScanning;
- (id)urlForVisualScanning;
- (void)stopRequestingAutoFill;
- (void)startRequestingAutoFill;
- (void)invalidate;
- (void)_activated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (id)description;
- (void)dealloc;
- (id)init;

@end

