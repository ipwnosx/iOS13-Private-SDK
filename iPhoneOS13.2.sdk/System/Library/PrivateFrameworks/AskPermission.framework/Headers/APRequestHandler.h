//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APRequestHandler : NSObject
{
}

+ (void)didReceiveStorePushNotificationWithPayload:(id)arg1;
+ (void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6;
+ (void)startDaemon;
+ (void)resetAccountWithType:(long long)arg1;
+ (void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

