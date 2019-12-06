//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientMigrationSourceProtocol-Protocol.h>

@class NSXPCConnection;
@protocol BYDeviceMigrationDelegate;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol>
{
    id <BYDeviceMigrationDelegate> _delegate;
    NSXPCConnection *_connection;
}

+ (id)clientInterface;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <BYDeviceMigrationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didChangeConnectionInformation:(id)arg1;
- (void)didFinishWithError:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)_connectToDaemon;
- (void)setFileTransferTemplate:(id)arg1;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

@end

