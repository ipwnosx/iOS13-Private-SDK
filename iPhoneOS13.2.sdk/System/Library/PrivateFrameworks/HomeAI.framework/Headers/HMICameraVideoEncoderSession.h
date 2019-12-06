//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/AVAssetWriterDelegate-Protocol.h>
#import <HomeAI/HMFLogging-Protocol.h>

@class AVAssetWriter, AVAssetWriterInput, HMFActivity, NSMutableData;

@interface HMICameraVideoEncoderSession : HMFObject <AVAssetWriterDelegate, HMFLogging>
{
//     struct OpaqueVTCompressionSession _session;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
    NSMutableData *_encodedAssetData;
    HMFActivity *_activity;
}

+ (id)logCategory;
@property(readonly) HMFActivity *activity; // @synthesize activity=_activity;
@property(readonly) NSMutableData *encodedAssetData; // @synthesize encodedAssetData=_encodedAssetData;
@property(readonly) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(readonly) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
// @property(readonly) struct OpaqueVTCompressionSession session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)finishEncodingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
// - (BOOL)encodePixelBuffer:(struct __CVBuffer )arg1 presentationTime:(CDStruct_1b6d18a9)arg2;
- (void)startEncoding;
@property int bitRate;
- (BOOL)isReadyForMoreMediaData;
- (void)assetWriter:(id)arg1 didProduceFragmentedMediaData:(id)arg2 fragmentedMediaDataReport:(id)arg3;
- (void)assetWriter:(id)arg1 didProduceFragmentedHeaderData:(id)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 codecType:(unsigned int)arg3 realTime:(BOOL)arg4 error:(id )arg5;

@end

