//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying>
{
    long long _qualityOfService;
    ICStoreRequestContext *_storeRequestContext;
    ICUserVerificationContext *_verificationContext;
}

@property(readonly, copy, nonatomic) ICUserVerificationContext *verificationContext; // @synthesize verificationContext=_verificationContext;
@property(copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
// - (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithVerificationContext:(id)arg1;

@end

