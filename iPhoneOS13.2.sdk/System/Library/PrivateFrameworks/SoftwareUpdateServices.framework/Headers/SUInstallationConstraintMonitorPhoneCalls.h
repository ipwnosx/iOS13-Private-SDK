//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@class TUCallCenter;

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase
{
    TUCallCenter *_queue_callCenter;
    BOOL _queue_satisfied;
    BOOL _inSpringBoard;
}

- (void)_queue_noteOnExistingPhoneCallDidChange:(BOOL)arg1;
- (void)_callStatusChanged;
- (NSUInteger)unsatisfiedConstraints;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 callCenter:(id)arg3 inSpringBoard:(BOOL)arg4 onExistingPhoneCall:(BOOL)arg5;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;

@end

