//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSXPCStoreServer.h>

__attribute__((visibility("hidden")))
@interface RCXPCStoreServer : NSXPCStoreServer
{
    id /* CDUnknownBlockType */ _shouldAcceptDatabaseConnection;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ shouldAcceptDatabaseConnection; // @synthesize shouldAcceptDatabaseConnection=_shouldAcceptDatabaseConnection;
// - (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

