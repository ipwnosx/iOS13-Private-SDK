//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/NUTimeBased-Protocol.h>

@interface PIFaceBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>
{
    long long _rawState;
}

// + (CDStruct_7982ab34)faceBalanceFromFaceImage:(id)arg1 forFaceRect:(CDStruct_996ac03c)arg2;
// + (CDStruct_996ac03c)faceRectFromNormalizedFaceRet:(CGRect)arg1 forImageExtent:(CDStruct_996ac03c)arg2 scaleX:(double)arg3 scaleY:(double)arg4;
+ (id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id )arg3;
+ (void)calculateRAWWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)calculateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) long long rawState; // @synthesize rawState=_rawState;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 isRAW:(BOOL)arg2;

@end

