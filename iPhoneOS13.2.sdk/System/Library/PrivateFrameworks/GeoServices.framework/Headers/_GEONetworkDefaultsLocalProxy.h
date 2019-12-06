//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/_GEONetworkDefaultsServerProxy-Protocol.h>

@class NSMutableArray, geo_isolater;
@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing>
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    NSUInteger _stateCaptureHandle;
}

@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
// - (id)captureStatePlistWithHints:(struct os_state_hints_s )arg1;
- (void)_updateWithNewConfig:(id)arg1 error:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;
- (id)_urlRequestForNetworkDefaults;
- (void)_updateNetworkDefaults;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (id)init;

@end

