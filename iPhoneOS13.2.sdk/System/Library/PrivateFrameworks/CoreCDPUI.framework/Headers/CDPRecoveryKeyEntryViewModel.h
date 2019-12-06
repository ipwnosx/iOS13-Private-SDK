//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPRemoteDeviceSecretValidator;
@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyEntryViewModel : NSObject
{
    int _mode;
    CDPContext *_context;
    id <CDPRecoveryKeyValidator> _validator;
    CDPRemoteDeviceSecretValidator *_secretValidator;
    BOOL _shouldSuppressCancelButton;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property BOOL shouldSuppressCancelButton; // @synthesize shouldSuppressCancelButton=_shouldSuppressCancelButton;
@property(readonly) int mode; // @synthesize mode=_mode;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)handleCancel;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recoveryKey;
- (id)placeholderText;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)footerLabelText;
- (id)footerButtonTitle;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3;

@end

