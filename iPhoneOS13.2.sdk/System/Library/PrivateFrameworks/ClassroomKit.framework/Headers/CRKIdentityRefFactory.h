//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject
{
    CRKIdentityConfiguration *_configuration;
}

@property(readonly, copy, nonatomic) CRKIdentityConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)arg1;
- (void)addClientAndServerAuthEKUsToParameters:(id)arg1;
- (id)certificateParametersWithCMSAlgorithm:(const void *)arg1;
- (id)keyParameters;
- (id)subject;
- (void)safeRelease:(void )arg1;
// - (struct __SecIdentity )makeIdentityRefWithError:(id )arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

