//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData;
@protocol TPPublicKey;

@protocol TPKeyPair <NSObject>
- (NSData *)signatureForData:(NSData *)arg1 withError:(id )arg2;
- (id <TPPublicKey>)publicKey;
@end

