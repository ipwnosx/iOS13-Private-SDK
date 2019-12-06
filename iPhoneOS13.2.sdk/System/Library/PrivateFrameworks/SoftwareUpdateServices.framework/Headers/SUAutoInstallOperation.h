//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUAutoInstallOperationClientHandler-Protocol.h>

@class NSString, NSUUID, SUAutoInstallForecast, SUManagerClient;
@protocol SUAutoInstallOperationDelegate;

@interface SUAutoInstallOperation : NSObject <SUAutoInstallOperationClientHandler, NSSecureCoding>
{
    SUManagerClient *_client;
    NSUUID *_id;
    id <SUAutoInstallOperationDelegate> _delegate;
    SUAutoInstallForecast *_forecast;
    int _agreementStatus;
    BOOL _canceled;
    BOOL _expired;
    BOOL _clientOwned;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int agreementStatus; // @synthesize agreementStatus=_agreementStatus;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property(readonly, retain, nonatomic) SUAutoInstallForecast *forecast; // @synthesize forecast=_forecast;
@property(nonatomic) id <SUAutoInstallOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSUUID *id; // @synthesize id=_id;
- (BOOL)_isDateExpired:(id)arg1;
- (BOOL)_isValidTillDate:(id)arg1;
- (BOOL)_isValidForScheduling;
- (BOOL)_isEffectivelyScheduled;
- (void)_noteAutoInstallOperationPasscodePolicyChanged:(NSUInteger)arg1;
- (void)_noteAutoInstallOperationIsReadyToInstall:(CDUnknownBlockType)arg1;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpireWithError:(id)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) BOOL expired; // @synthesize expired=_expired;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)dealloc;
- (id)initWithAutoInstallOperationModel:(id)arg1 client:(id)arg2;
- (id)_initWithClient:(id)arg1 clientOwned:(BOOL)arg2 id:(id)arg3 forecast:(id)arg4 agreementStatus:(int)arg5 cancelled:(BOOL)arg6 expired:(BOOL)arg7;
- (id)init;

@end

