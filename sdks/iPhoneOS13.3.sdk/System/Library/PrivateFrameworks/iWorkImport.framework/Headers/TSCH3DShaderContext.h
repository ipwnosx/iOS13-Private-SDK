//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, TSCH3DShaderResource, TSCH3DVersion;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderContext : NSObject
{
    struct ObjectStateMatchObject _state;
    TSCH3DVersion *_version;
    TSCH3DShaderResource *_shader;
    NSSet *_debugEffects;
}

@property(copy, nonatomic) NSSet *debugEffects; // @synthesize debugEffects=_debugEffects;
@property(retain, nonatomic) TSCH3DShaderResource *shader; // @synthesize shader=_shader;
@property(retain, nonatomic) TSCH3DVersion *version; // @synthesize version=_version;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)diffEffects:(id)arg1;
- (id)discardStatement;
- (id)textureFunctionNameForVariable:(id)arg1 projective:(BOOL)arg2;
- (struct TextureAttributes)textureAttributesForVariable:(id)arg1;
- (id)textureVariables;
- (const struct ObjectStateMatchObject )state;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithObjectState:(const struct ObjectState )arg1 version:(id)arg2;

@end
