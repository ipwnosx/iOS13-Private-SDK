//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject
{
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    BOOL m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}

// - (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)setMonoPalette:(id)arg1;
- (BOOL)isFlipped;
- (const char )pixelData;
- (id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char )arg6 in_bitmapSize:(unsigned int)arg7;
- (id)initWithDIBitmap:(id)arg1 in_header:(const char )arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char )arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (id)initWithDIBitmap:(id)arg1 in_dib:(const char )arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (id)init;
- (BOOL)processDIBHeader:(id)arg1 in_header:(const char )arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (void)appendDIBPalette:(id)arg1 in_header:(const char )arg2 in_headerSize:(unsigned int)arg3 in_usage:(int)arg4;
- (unsigned int)pixelDataOffset:(const char )arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (unsigned int)coloursUsed:(const char )arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3;
- (void)setNull;
- (void)writeInfoHeader;
- (void)writeFileHeader;
- (void)writePaletteEntry:(id)arg1 in_index:(int)arg2;
- (BOOL)parseHeader:(const char )arg1 in_headerSize:(unsigned int)arg2;

@end

