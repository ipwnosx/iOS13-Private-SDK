//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject
{
//    struct __SecTrust _unevaluatedTrust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_uncommentedSender;
    NSUInteger _certificateType;
    NSString *_sender;
}

@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSUInteger certificateType; // @synthesize certificateType=_certificateType;
// - (void).cxx_destruct;
// property(readonly, nonatomic) struct __SecTrust trust;
@property(readonly, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;
- (void)dealloc;
//  (id)initWithCertificateType:(NSUInteger)arg1 trust:(struct __SecTrust )arg2 sender:(id)arg3;

@end

