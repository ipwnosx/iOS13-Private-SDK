//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BCSNotificationServiceConnection : NSObject
{
    NSXPCConnection *_serviceConnection;
}

@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 withReply:(CDUnknownBlockType)arg4;

@end

