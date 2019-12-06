//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WFColor;

@interface WFWorkflowIconDrawer : NSObject
{
    BOOL _drawBackground;
    BOOL _useCustomImage;
    BOOL _rounded;
    unsigned short _glyphCharacter;
    WFColor *_backgroundColor;
    NSData *_customImageData;
    WFColor *_glyphColor;
    double _cornerRadius;
    CGSize _glyphSize;
}

+ (id)pngDataForImageWithIcon:(id)arg1 size:(CGSize)arg2;
+ (id)glyphImageWithIcon:(id)arg1 size:(CGSize)arg2;
+ (id)imageWithIcon:(id)arg1 size:(CGSize)arg2;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL rounded; // @synthesize rounded=_rounded;
@property(nonatomic) BOOL useCustomImage; // @synthesize useCustomImage=_useCustomImage;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=_drawBackground;
@property(nonatomic) CGSize glyphSize; // @synthesize glyphSize=_glyphSize;
@property(retain, nonatomic) WFColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(copy, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(retain, nonatomic) WFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned short glyphCharacter; // @synthesize glyphCharacter=_glyphCharacter;
// - (void).cxx_destruct;
- (id)imageWithSize:(CGSize)arg1;
- (void)drawInContext:(id)arg1 inRect:(CGRect)arg2;
- (id)init;
- (id)initWithHomeScreenIcon:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)initWithIcon:(id)arg1;

@end

