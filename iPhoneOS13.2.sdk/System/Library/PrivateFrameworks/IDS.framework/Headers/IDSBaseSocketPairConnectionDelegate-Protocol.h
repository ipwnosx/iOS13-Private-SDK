//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IDSBaseSocketPairConnection, NSData;

@protocol IDSBaseSocketPairConnectionDelegate 

@optional
- (void)connectionDidClose:(IDSBaseSocketPairConnection *)arg1;
- (void)connection:(IDSBaseSocketPairConnection *)arg1 didReceiveData:(NSData *)arg2;
@end
