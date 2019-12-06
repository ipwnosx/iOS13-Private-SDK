//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSString;

@interface ISMachineDataProvisioningOperation : ISOperation
{
    NSUInteger _accountID;
    BOOL _allowsBootstrapCellularData;
    BOOL _hidesServerDrivenDialogs;
    NSData *_inputData;
    long long _protocolVersion;
    NSString *_userAgent;
}

// - (void).cxx_destruct;
- (id)_newFinishProvisioningOperationWithData:(id)arg1;
- (BOOL)_finishProvisioningWithResponse:(id)arg1 sessionID:(unsigned int)arg2 error:(id )arg3;
- (void)run;
@property(copy) NSString *userAgent;
@property long long protocolVersion;
@property BOOL hidesServerDrivenDialogs;
@property BOOL allowsBootstrapCellularData;
- (id)initWithAccountIdentifier:(NSUInteger)arg1 provisioningData:(id)arg2;

@end

