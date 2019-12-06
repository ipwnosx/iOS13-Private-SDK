//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>

@class HMDVideoCodec, HMDVideoCodecParameters, NSArray;

@interface HMDVideoCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDVideoCodec *_videoCodec;
    HMDVideoCodecParameters *_codecParameters;
    NSArray *_videoAttributes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDVideoCodec *videoCodec; // @synthesize videoCodec=_videoCodec;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3;

@end

