//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData;

@protocol CDPKeychainCircleProxy <NSObject>
- (BOOL)requiresInitialSync;
- (BOOL)supportsInteractiveAuth;
- (BOOL)isComplete;
- (NSData *)processIncomingPayload:(NSData *)arg1 error:(id )arg2;
- (NSData *)initiatingPayload:(id )arg1;
@end

