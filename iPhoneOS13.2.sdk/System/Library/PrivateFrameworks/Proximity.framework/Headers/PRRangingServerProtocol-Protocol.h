//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Proximity/PRServerProtocol-Protocol.h>

@class NSDictionary, PRRemoteDevice;

@protocol PRRangingServerProtocol <PRServerProtocol>
- (void)stopP2PRanging:(PRRemoteDevice *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)startP2PRanging:(PRRemoteDevice *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)configureForP2PRanging:(PRRemoteDevice *)arg1 options:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end
