//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSafariSandboxBrokerProtocol-Protocol.h>

@protocol OS_os_log;

@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol>
{
    int _pid;
    NSObject<OS_os_log> *_log;
//     CDStruct_4c969caf _auditToken;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
// @property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
// - (void).cxx_destruct;
- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
// - (id)initWithPID:(int)arg1 auditToken:(CDStruct_4c969caf)arg2;

@end

