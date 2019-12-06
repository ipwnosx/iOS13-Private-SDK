//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCAudioStreamCodecConfig : NSObject
{
    long long _codecType;
    BOOL _dtxEnabled;
    int _preferredMode;
    NSMutableArray *_supportedModes;
    BOOL _octetAligned;
    BOOL _dtmf;
    unsigned int _networkPayload;
    unsigned short _evsChannelAwareOffset;
    BOOL _evsHeaderFullOnly;
}

@property(nonatomic) BOOL evsHeaderFullOnly; // @synthesize evsHeaderFullOnly=_evsHeaderFullOnly;
@property(nonatomic) unsigned short evsChannelAwareOffset; // @synthesize evsChannelAwareOffset=_evsChannelAwareOffset;
@property(nonatomic) unsigned int networkPayload; // @synthesize networkPayload=_networkPayload;
@property(nonatomic, getter=isDTMF) BOOL dtmf; // @synthesize dtmf=_dtmf;
@property(nonatomic, getter=isOctetAligned) BOOL octetAligned; // @synthesize octetAligned=_octetAligned;
@property(retain, nonatomic) NSArray *supportedModes; // @synthesize supportedModes=_supportedModes;
@property(nonatomic) int preferredMode; // @synthesize preferredMode=_preferredMode;
@property(nonatomic, getter=isDTXEnabled) BOOL dtxEnabled; // @synthesize dtxEnabled=_dtxEnabled;
@property(readonly, nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (void)setupEVSModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRWBModesWithClientModeMask:(unsigned int)arg1;
- (void)setupAMRModesWithClientModeMask:(unsigned int)arg1;
- (void)setPreferredModeWithClientMode:(int)arg1;
- (void)setupModesWithClientModeMask:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL isComfortNoise;
- (void)dealloc;
- (id)initWithCodecType:(long long)arg1;

@end

