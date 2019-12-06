//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelFlowProtocol.h>

@class NSDate, NSMutableArray, NWEndpoint, NWUDPSession;

@interface NPTunnelFlowUDP : NPTunnelFlowProtocol
{
    NSMutableArray *_savedDirectData;
    NSUInteger _savedDataSize;
    NWUDPSession *_directSession;
    NSDate *_firstPacketDate;
    NWEndpoint *_remoteEndpoint;
}

@property(readonly) NWEndpoint *remoteEndpoint; // @synthesize remoteEndpoint=_remoteEndpoint;
@property(retain) NSDate *firstPacketDate; // @synthesize firstPacketDate=_firstPacketDate;
@property(retain) NWUDPSession *directSession; // @synthesize directSession=_directSession;
@property NSUInteger savedDataSize; // @synthesize savedDataSize=_savedDataSize;
@property(retain) NSMutableArray *savedDirectData; // @synthesize savedDirectData=_savedDirectData;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)sendDataOnDirectSession:(id)arg1;
- (void)startHandlingIncomingData;
- (void)handleIncomingData:(id)arg1 andError:(id)arg2;
- (void)stopDirectConnection;
- (void)startDirectConnection;
- (void)handleAppData:(id)arg1;
//  (id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(struct nw_protocol )arg3 extraProperties:(id)arg4;

@end

