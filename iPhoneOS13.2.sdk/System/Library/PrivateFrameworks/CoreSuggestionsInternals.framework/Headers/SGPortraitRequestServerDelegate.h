//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _PASLock;

@interface SGPortraitRequestServerDelegate : NSObject <NSXPCListenerDelegate>
{
    id /* CDUnknownBlockType */ _makeHandler;
    _PASLock *_handlerCache;
}

// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMakeHandler:(CDUnknownBlockType)arg1;

@end

