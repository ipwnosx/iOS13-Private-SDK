//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection
{
    SFService *_service;
}

@property(nonatomic) __weak SFService *service; // @synthesize service=_service;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)sendResponse:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendEvent:(id)arg1;
- (id)initWithService:(id)arg1;

@end

