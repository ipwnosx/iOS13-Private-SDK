//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject
{
    PKXPCService *_remoteService;
}

// - (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)trustedDeviceEnrollmentSignatureForDevice:(NSUInteger)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)trustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

