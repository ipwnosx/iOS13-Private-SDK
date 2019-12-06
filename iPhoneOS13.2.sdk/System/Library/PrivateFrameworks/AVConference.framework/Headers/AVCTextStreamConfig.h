//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCTextStreamConfig : NSObject
{
    long long _codecType;
    NSUInteger _numRedundantPayloads;
    NSUInteger _txRedPayloadType;
    NSUInteger _rxRedPayloadType;
    float _txIntervalMin;
}

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
@property(nonatomic) float txIntervalMin; // @synthesize txIntervalMin=_txIntervalMin;
@property(nonatomic) NSUInteger rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property(nonatomic) NSUInteger txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;
@property(nonatomic) NSUInteger numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (BOOL)isRedValid;
- (BOOL)isValid;

@end

