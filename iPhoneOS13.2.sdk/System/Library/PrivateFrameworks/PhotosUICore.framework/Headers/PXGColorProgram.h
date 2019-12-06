//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice, MTLTexture;

@interface PXGColorProgram : NSObject
{
    unsigned int _param_count;
    unsigned int _num_trc_luts;
    unsigned int _trc_lut_widths;
    unsigned short _numInputs;
    unsigned int _opcodes;
    id <MTLDevice> _device;
    CGColorSpaceRef _sourceColorSpace;
    CGColorSpaceRef _destinationColorSpace;
    NSUInteger _flags;
    id <MTLBuffer> _params;
    id <MTLTexture> _TRCLUTs;
    id <MTLTexture> _colorCube;
}

@property(readonly, nonatomic) id <MTLTexture> colorCube; // @synthesize colorCube=_colorCube;
@property(readonly, nonatomic) id <MTLTexture> TRCLUTs; // @synthesize TRCLUTs=_TRCLUTs;
@property(readonly, nonatomic) id <MTLBuffer> params; // @synthesize params=_params;
@property(readonly, nonatomic) unsigned short numInputs; // @synthesize numInputs=_numInputs;
@property(readonly, nonatomic) unsigned int opcodes; // @synthesize opcodes=_opcodes;
@property(readonly, nonatomic) NSUInteger flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) CGColorSpaceRef destinationColorSpace; // @synthesize destinationColorSpace=_destinationColorSpace;
@property(readonly, nonatomic) CGColorSpaceRef sourceColorSpace; // @synthesize sourceColorSpace=_sourceColorSpace;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
// - (void).cxx_destruct;
- (BOOL)_compactProgramWithConversionInfo:(CGColorConversionInfo )arg1 cubeSize:(int)arg2 cubeOnly:(BOOL)arg3;
- (BOOL)_generateProgram;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)arg1 sourceColorSpace:(CGColorSpaceRef)arg2 destinationColorSpace:(CGColorSpaceRef)arg3 flags:(NSUInteger)arg4;

@end

