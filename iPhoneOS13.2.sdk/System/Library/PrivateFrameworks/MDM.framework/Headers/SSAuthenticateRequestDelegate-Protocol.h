//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/SSRequestDelegate-Protocol.h>

@class SSAuthenticateRequest, SSAuthenticateResponse;

@protocol SSAuthenticateRequestDelegate <SSRequestDelegate>

@optional
- (void)authenticateRequest:(SSAuthenticateRequest *)arg1 didReceiveResponse:(SSAuthenticateResponse *)arg2;
@end

