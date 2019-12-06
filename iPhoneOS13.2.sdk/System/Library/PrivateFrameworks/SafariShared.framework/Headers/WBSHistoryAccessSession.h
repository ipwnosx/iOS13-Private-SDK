//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryAccessSessionProtocol-Protocol.h>

@class WBSHistoryService;
@protocol OS_dispatch_queue;

@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol>
{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithHistoryService:(id)arg1;

@end

