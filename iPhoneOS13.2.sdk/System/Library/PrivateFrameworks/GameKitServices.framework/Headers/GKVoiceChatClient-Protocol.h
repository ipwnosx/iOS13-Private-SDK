//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKVoiceChatService, NSData, NSError, NSString;

@protocol GKVoiceChatClient <NSObject>
- (NSString *)participantID;
- (void)voiceChatService:(GKVoiceChatService *)arg1 sendData:(NSData *)arg2 toParticipantID:(NSString *)arg3;

@optional
- (void)voiceChatService:(GKVoiceChatService *)arg1 didReceiveInvitationFromParticipantID:(NSString *)arg2 callID:(unsigned int)arg3;
- (void)voiceChatService:(GKVoiceChatService *)arg1 didStopWithParticipantID:(NSString *)arg2 error:(NSError *)arg3;
- (void)voiceChatService:(GKVoiceChatService *)arg1 didNotStartWithParticipantID:(NSString *)arg2 error:(NSError *)arg3;
- (void)voiceChatService:(GKVoiceChatService *)arg1 didStartWithParticipantID:(NSString *)arg2;
- (void)voiceChatService:(GKVoiceChatService *)arg1 sendRealTimeData:(NSData *)arg2 toParticipantID:(NSString *)arg3;
@end

