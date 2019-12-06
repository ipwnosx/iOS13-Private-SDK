//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKAnisetteData, AKAnisetteProvisioningController, AKDevice, NSLock, NSString;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext>
{
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
    AKDevice *_pairedDevice;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property(retain, nonatomic) AKDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
// - (void).cxx_destruct;
- (id)_pairedDeviceAnisetteController;
- (id)_nativeAnisetteController;
- (void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_generateAppleIDHeadersForSessionTask:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_generateAppleIDHeadersForRequest:(id)arg1 error:(id )arg2;
- (id)_genericAppleIDHeadersDictionaryForRequest:(id)arg1;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(BOOL )arg3;
- (id)appleIDHeadersForRequest:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)relevantHTTPStatusCodes;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

