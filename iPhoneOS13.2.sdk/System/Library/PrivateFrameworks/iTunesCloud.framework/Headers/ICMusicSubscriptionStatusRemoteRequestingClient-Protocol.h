//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICMusicSubscriptionStatusResponse, NSError, NSUUID;

@protocol ICMusicSubscriptionStatusRemoteRequestingClient <NSObject>
- (void)deliverSubscriptionStatusResponse:(ICMusicSubscriptionStatusResponse *)arg1 forUniqueIdentifier:(NSUUID *)arg2 error:(NSError *)arg3;
@end

