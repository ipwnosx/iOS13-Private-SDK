//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CHRemoteRecognitionRequest, CHTokenizedTextResult;

@protocol CHRemoteRequestProtocol
- (void)transcriptionPathsForTokenizedResult:(CHTokenizedTextResult *)arg1 recognitionRequest:(CHRemoteRecognitionRequest *)arg2 withReply:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)handleRecognitionRequest:(CHRemoteRecognitionRequest *)arg1 withReply:(void (^)(CHTokenizedTextResult *, NSError *))arg2;
@end

