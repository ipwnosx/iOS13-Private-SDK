//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCColorPalettizer : NSObject
{
//     struct _tagOctree m_pTree;
    BOOL isDefaultPaletteSize;
}

// - (int)paletteIndexFromQuadColor:(struct _tagRgbQuad)arg1;
- (int)paletteIndexFromTSUColor:(id)arg1;
- (id)getPaletteData;
- (id)getPngPaletteData;
- (id)getPaletteDataRaw;
- (unsigned int)paletteColorCount;
- (void)createPalette;
// - (BOOL)addQuadColor:(struct _tagRgbQuad)arg1;
- (BOOL)addTSUColor:(id)arg1;
- (void)dealloc;
- (id)initWitDefaultPaletteSize;
- (id)initWitMaxPaletteSize:(unsigned int)arg1;
// - (int)rgbToIndexOctree:(struct _tagOctree )arg1 source:(struct _tagRgbQuad)arg2 destination:(char )arg3;
// - (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode )arg1 paletteEntry:(struct _tagRgbQuad )arg2 index:(unsigned short)arg3;
// - (int)reduceOctree:(struct _tagOctree )arg1;
// - (int)addPixelToOctree:(struct _tagOctree )arg1 pixel:(struct _tagRgbQuad)arg2;
// - (int)deleteListOctree:(struct _tagLevelItem )arg1;
// - (int)deleteNodeOctree:(struct _tagOctreeNode )arg1;
// - (int)createNodeOctree:(struct _tagOctreeNode )arg1 parent:(struct _tagOctreeNode )arg2;
// - (int)deleteOctree:(struct _tagOctree )arg1;
// - (int)createOctree:(struct _tagOctree )arg1 maxPaletteSize:(unsigned short)arg2;

@end

