//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, SFEventMessage, SFRequestMessage, SFResponseMessage, SFSession;

@protocol SDXPCSessionInterface
- (void)sessionSendResponse:(SFResponseMessage *)arg1;
- (void)sessionSendRequest:(SFRequestMessage *)arg1;
- (void)sessionSendFrameType:(unsigned char)arg1 data:(NSData *)arg2;
- (void)sessionSendEvent:(SFEventMessage *)arg1;
- (void)sessionActivate:(SFSession *)arg1 completion:(void (^)(NSError *))arg2;
@end

