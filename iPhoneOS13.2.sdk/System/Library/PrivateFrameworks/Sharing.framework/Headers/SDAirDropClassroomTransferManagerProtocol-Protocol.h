//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSDictionary, NSString;

@protocol SDAirDropClassroomTransferManagerProtocol <SDXPCDaemonProtocol>
- (void)updateTransferWithIdentifier:(NSString *)arg1 withState:(long long)arg2 information:(NSDictionary *)arg3 completionHandler:(void (^)(BOOL, NSURL *, NSError *))arg4;
@end

