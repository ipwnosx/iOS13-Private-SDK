//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, VCMediaStreamTransport;

@protocol VCMediaStreamTransportDelegate <NSObject>
- (void)vcMediaStreamTransport:(VCMediaStreamTransport *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;

@optional
- (void)vcMediaStreamTransport:(VCMediaStreamTransport *)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned int)arg3;
@end

