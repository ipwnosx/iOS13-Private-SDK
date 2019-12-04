//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARUISpriteTexture;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUISpritesRenderer : NSObject
{
    id <MTLBuffer> _spriteVertexBuffer;
    id <MTLBuffer> _spriteIndexBuffer;
    unsigned long long _numIndicies;
    // Error parsing type: ^{?=[2{?=[4]}]}, name: _vertexAttributes
    struct *_uniforms;
    ARUISpriteTexture *_texture;
}

+ (void)clearCaches;
@property(retain, nonatomic) ARUISpriteTexture *texture; // @synthesize texture=_texture;
@property(nonatomic) struct *uniforms; // @synthesize uniforms=_uniforms;
// Error parsing type for property vertexAttributes:
// Property attributes: T^{?=[2{?=[4]}]},N,V_vertexAttributes

- (void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 maximumRingCount:(unsigned long long)arg2;

@end
