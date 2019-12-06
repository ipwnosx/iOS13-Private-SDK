//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoKit/NUGLLayer.h>

@class NUGLPipeline, NUGLVertexArray, NUImageGeometry;
@protocol NUTextureImage;

@interface NUImageLayer : NUGLLayer
{
    NUGLPipeline *_pipeline;
    NUGLVertexArray *_vertices;
    BOOL _debugTextureDrawing;
    CGColorRef _debugColor;
    id <NUTextureImage> __image;
    NUImageGeometry *__geometry;
}

+ (id)fragmentShaderProgram;
+ (id)vertexLayout;
+ (id)vertexShaderProgram;
@property(retain) NUImageGeometry *_geometry; // @synthesize _geometry=__geometry;
@property(retain) id <NUTextureImage> _image; // @synthesize _image=__image;
@property(retain) CGColorRef debugColor; // @synthesize debugColor=_debugColor;
// - (void).cxx_destruct;
// - (void)drawTexture:(id)arg1 inRect:(CDStruct_0973877e)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)drawImage:(id)arg1 region:(id)arg2 context:(id)arg3;
- (void)clearBackground:(CGColorRef)arg1 context:(id)arg2;
- (void)draw:(id)arg1;
- (void)reset:(id)arg1;
@property(retain) NUImageGeometry *geometry;
@property(retain) id <NUTextureImage> image;
- (id)init;

@end

