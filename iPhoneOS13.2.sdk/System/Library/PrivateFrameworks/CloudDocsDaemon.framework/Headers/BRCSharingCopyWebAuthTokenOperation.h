//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    NSString *_ckContainerID;
}

@property(retain, nonatomic) NSString *ckContainerID; // @synthesize ckContainerID=_ckContainerID;
// - (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1 ckContainerID:(id)arg2;

@end

