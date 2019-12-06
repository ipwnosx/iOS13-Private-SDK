//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class IDSService, NSDictionary, NSObject, NSSet;
@protocol CRKIdentitySharingOperationDelegate;

@interface CRKIdentitySharingOperation : CATOperation
{
    NSObject<CRKIdentitySharingOperationDelegate> *_delegate;
    IDSService *_service;
    NSDictionary *_message;
    NSSet *_destinations;
}

@property(readonly, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic) __weak NSObject<CRKIdentitySharingOperationDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)didSendWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)initWithService:(id)arg1 message:(id)arg2 recipients:(id)arg3;

@end

