//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, VCMediaNegotiator;

@interface AVCMediaStreamNegotiator : NSObject
{
    long long _errorDetailCode;
    long long _videoHeight;
    long long _videoWidth;
    long long _dpiFactor;
    unsigned char _deviceRole;
    NSData *_mediaBlobCompressed;
    NSData *_mediaBlobNegotiated;
    NSString *_dataSessionID;
    long long _mediaStreamMode;
    VCMediaNegotiator *_mediaNegotiator;
    NSData *_remoteCallInfoBlob;
    NSData *_offer;
    NSData *_answer;
}

@property(readonly, nonatomic) NSData *answer; // @synthesize answer=_answer;
@property(readonly, nonatomic) NSData *offer; // @synthesize offer=_offer;
- (id)generateMediaStreamInitOptionsWithError:(id )arg1;
- (BOOL)addLocalCallInfoBlobToOutgoingDictionary:(id)arg1;
- (id)generateMediaStreamConfigurationWithError:(id )arg1;
- (BOOL)setAnswer:(id)arg1 withError:(id )arg2;
- (BOOL)processAnswerWithError:(id )arg1 errorReason:(id )arg2;
- (BOOL)createAnswer;
- (id)initWithOffer:(id)arg1 options:(id)arg2 error:(id )arg3;
- (id)initWithOffer:(id)arg1 error:(id )arg2;
- (BOOL)processInitOptions:(id)arg1 error:(id )arg2 errorReason:(id )arg3;
- (BOOL)processOfferWithError:(id )arg1 errorReason:(id )arg2;
- (BOOL)createOffer;
- (id)initWithMode:(long long)arg1 error:(id )arg2;
- (BOOL)initNegotiatorLocalConfiguration:(id )arg1;
- (void)refreshLoggingParameters;
- (void)dealloc;
- (unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(long long)arg1;
- (long long)clientCodecTypeWithCodecType:(long long)arg1;
- (long long)AVCVideoStreamModeWithAVCMediaStreamMode:(long long)arg1;
- (int)AVConferenceOperatingModeWithAVCMediaStreamMode:(long long)arg1;

@end

