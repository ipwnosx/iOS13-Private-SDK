//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NNMKMessageContentSyncServiceServer, NSString;

@protocol NNMKMessageContentSyncServiceServerDelegate <NSObject>
- (void)messageContentSyncServiceServer:(NNMKMessageContentSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)messageContentSyncServiceServer:(NNMKMessageContentSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

