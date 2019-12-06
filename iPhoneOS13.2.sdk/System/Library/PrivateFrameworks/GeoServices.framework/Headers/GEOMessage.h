//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOPeer, NSDictionary, NSProgress, NSString;
@protocol OS_xpc_object;

@interface GEOMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpcMessage;
    NSString *_messageName;
    NSDictionary *_userInfo;
    GEOPeer *_peer;
    NSProgress *_progressToMirrorOverXPC;
    GEOApplicationAuditToken *_preferredAuditToken;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property(readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken; // @synthesize throttleToken=_throttleToken;
@property(readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken; // @synthesize preferredAuditToken=_preferredAuditToken;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) GEOPeer *peer; // @synthesize peer=_peer;
// - (void).cxx_destruct;
- (void)sendReplyWithXPCUserInfo:(id)arg1;
- (void)sendReply:(id)arg1;
@property(readonly, nonatomic) NSProgress *progress;
- (id)initWithXPCMessage:(id)arg1 peer:(id)arg2;

@end

