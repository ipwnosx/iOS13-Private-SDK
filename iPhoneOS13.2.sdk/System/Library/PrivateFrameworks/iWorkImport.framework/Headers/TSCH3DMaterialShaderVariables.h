//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSCH3DShaderVariable;

__attribute__((visibility("hidden")))
@interface TSCH3DMaterialShaderVariables : NSObject <NSCopying>
{
    TSCH3DShaderVariable *_texture;
    TSCH3DShaderVariable *_intensity;
    TSCH3DShaderVariable *_factor;
    TSCH3DShaderVariable *_textureColor;
    TSCH3DShaderVariable *_color;
    TSCH3DShaderVariable *_modulation;
    TSCH3DShaderVariable *_texcoords;
    TSCH3DShaderVariable *_textureMatrix;
}

+ (id)variablesWithTexture:(id)arg1 intensity:(id)arg2 factor:(id)arg3 textureColor:(id)arg4 color:(id)arg5 modulation:(id)arg6 texcoords:(id)arg7 textureMatrix:(id)arg8;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *textureMatrix; // @synthesize textureMatrix=_textureMatrix;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *texcoords; // @synthesize texcoords=_texcoords;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *modulation; // @synthesize modulation=_modulation;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *color; // @synthesize color=_color;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *textureColor; // @synthesize textureColor=_textureColor;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *factor; // @synthesize factor=_factor;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *intensity; // @synthesize intensity=_intensity;
@property(readonly, retain, nonatomic) TSCH3DShaderVariable *texture; // @synthesize texture=_texture;
- (void)dealloc;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTexture:(id)arg1 intensity:(id)arg2 factor:(id)arg3 textureColor:(id)arg4 color:(id)arg5 modulation:(id)arg6 texcoords:(id)arg7 textureMatrix:(id)arg8;

@end

