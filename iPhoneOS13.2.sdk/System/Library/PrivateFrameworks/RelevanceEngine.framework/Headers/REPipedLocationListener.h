//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>


@class NSXPCListener;

@interface REPipedLocationListener : RESingleton <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)_init;

@end

