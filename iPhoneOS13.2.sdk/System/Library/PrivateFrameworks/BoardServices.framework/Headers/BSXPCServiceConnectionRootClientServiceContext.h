//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootClientServiceContext : BSXPCServiceConnectionRootContext
{
    BOOL _privileged;
}

+ (id)uniqueClientContextWithServiceName:(id)arg1 privileged:(BOOL)arg2;
@property(readonly, nonatomic, getter=isPrivileged) BOOL privileged; // @synthesize privileged=_privileged;
- (BOOL)isClient;
@property(readonly, copy, nonatomic) NSString *serviceName;
- (id)_initWithService:(id)arg1 privileged:(BOOL)arg2;

@end

