//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSPAppRule, NSUUID;
@protocol NPTunnelDelegate, OS_dispatch_data, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters, OS_nw_path;

@interface NPTunnel : NSObject
{
//    struct nw_protocol _protocol;
    NSObject<OS_dispatch_data> *_savedData;
    void _idleTimer;
    BOOL _isTFOProbeSucceeded;
    BOOL _isCancelled;
    BOOL _isReadyForData;
    BOOL _eof;
    BOOL _handledDisconnected;
    BOOL _disableIdleTimeout;
    int _error;
    NSUUID *_identifier;
    NSObject<OS_nw_parameters> *_parameters;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_endpoint> *_localEndpoint;
    NSObject<OS_nw_path> *_path;
    id <NPTunnelDelegate> _delegate;
    NSMutableDictionary *_flows;
    NSPAppRule *_appRule;
    NSDate *_connectionStartDate;
    double _timeToFirstRequest;
    double _timeToFirstByte;
    long long _connectionState;
    long long _fallbackReason;
    NSUInteger _timestamps;
}

+ (void)initializeProtocol;
@property(nonatomic) BOOL disableIdleTimeout; // @synthesize disableIdleTimeout=_disableIdleTimeout;
@property(nonatomic) BOOL handledDisconnected; // @synthesize handledDisconnected=_handledDisconnected;
@property(nonatomic) BOOL eof; // @synthesize eof=_eof;
@property(readonly, nonatomic) BOOL isReadyForData; // @synthesize isReadyForData=_isReadyForData;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) BOOL isTFOProbeSucceeded; // @synthesize isTFOProbeSucceeded=_isTFOProbeSucceeded;
@property(readonly, nonatomic) NSUInteger timestamps; // @synthesize timestamps=_timestamps;
@property(nonatomic) long long fallbackReason; // @synthesize fallbackReason=_fallbackReason;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(nonatomic) double timeToFirstByte; // @synthesize timeToFirstByte=_timeToFirstByte;
@property(nonatomic) double timeToFirstRequest; // @synthesize timeToFirstRequest=_timeToFirstRequest;
@property(retain, nonatomic) NSDate *connectionStartDate; // @synthesize connectionStartDate=_connectionStartDate;
@property(readonly, nonatomic) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(readonly, nonatomic) NSMutableDictionary *flows; // @synthesize flows=_flows;
@property(readonly, nonatomic) __weak id <NPTunnelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_nw_path> *path; // @synthesize path=_path;
@property(retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_nw_interface> *outputInterface;
- (void)teardownOutputHandler;
- (void)destroyConnection;
- (void)cancelConnection;
- (void)handleEOF;
//  (void)handleReadData:(struct nw_frame_array_s )arg1;
- (void)readMinimumLength:(NSUInteger)arg1 maximumLength:(NSUInteger)arg2;
- (void)handleInputAvailable;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)write:(id)arg1;
- (void)handleOutputAvailable;
- (void)writeInitialData;
- (void)handleConnectionIsDisconnected;
- (BOOL)flowIsFirstFlow:(id)arg1;
- (void)handleFlowUsedTunnel;
- (BOOL)start;
@property(readonly, nonatomic) BOOL isConnectionAlive;
- (NSUInteger)maxDataSendSizeForFlow:(id)arg1;
- (id)createConnectionInfo;
@property(readonly, nonatomic) NSUInteger initialWindowSize;
@property(readonly, nonatomic) BOOL canHandleMoreData;
- (void)handleFallbackForFlow:(id)arg1;
- (void)handleCanHandleMoreData;
- (void)handleDisconnected;
- (void)handleReady;
- (void)handleConnected;
- (void)acknowledgeData:(NSUInteger)arg1 sentToFlow:(id)arg2;
- (void)sendData:(id)arg1 toClientFlow:(NSUInteger)arg2;
- (void)increaseWindowSizeForFlow:(NSUInteger)arg1 byBytes:(NSUInteger)arg2;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)closeFlow:(id)arg1;
- (id)handleFlowClosed:(NSUInteger)arg1 withFallbackReason:(long long)arg2;
- (BOOL)hasFlow:(NSUInteger)arg1;
- (void)removeFlow:(NSUInteger)arg1;
- (void)startIdleTimer;
- (NSUInteger)allocateFlowID;
- (BOOL)addNewFlow:(id)arg1;
// property(readonly, nonatomic) struct nw_protocol protocol;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 delegate:(id)arg5;

@end

