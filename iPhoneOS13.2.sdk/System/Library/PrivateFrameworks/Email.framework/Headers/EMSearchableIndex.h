//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection;

@interface EMSearchableIndex : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

+ (id)remoteInterface;
+ (id)log;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteConnection:(id)arg1;

@end

