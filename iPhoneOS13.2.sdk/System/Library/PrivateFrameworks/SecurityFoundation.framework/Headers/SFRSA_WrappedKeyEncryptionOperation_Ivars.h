//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation;

@interface SFRSA_WrappedKeyEncryptionOperation_Ivars : NSObject
{
    SFRSAEncryptionOperation *keyWrappingOperation;
    SFSymmetricEncryptionOperation *sessionEncryptionOperation;
}

// - (void).cxx_destruct;

@end

