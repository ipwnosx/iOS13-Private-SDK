//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVContentKeyRequest, AVContentKeySession, AVPersistableContentKeyRequest, NSData, NSError, NSString;

@protocol AVContentKeySessionDelegate <NSObject>
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideContentKeyRequest:(AVContentKeyRequest *)arg2;

@optional
- (void)contentKeySessionDidGenerateExpiredSessionReport:(AVContentKeySession *)arg1;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(AVContentKeySession *)arg1;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequestDidSucceed:(AVContentKeyRequest *)arg2;
- (BOOL)contentKeySession:(AVContentKeySession *)arg1 shouldRetryContentKeyRequest:(AVContentKeyRequest *)arg2 reason:(NSString *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 contentKeyRequest:(AVContentKeyRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didUpdatePersistableContentKey:(NSData *)arg2 forContentKeyIdentifier:(id)arg3;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvidePersistableContentKeyRequest:(AVPersistableContentKeyRequest *)arg2;
- (void)contentKeySession:(AVContentKeySession *)arg1 didProvideRenewingContentKeyRequest:(AVContentKeyRequest *)arg2;
@end

