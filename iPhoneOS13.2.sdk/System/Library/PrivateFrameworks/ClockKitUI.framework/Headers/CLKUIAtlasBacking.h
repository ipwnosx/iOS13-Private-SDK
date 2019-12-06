//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIMmapFile, NSData, NSString;

@interface CLKUIAtlasBacking : NSObject
{
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
    NSString *_uuid;
//    struct CLKUIAtlasBackingStructure _structure;
}

//  (id)atlasBackingWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 data:(id)arg3;
+ (id)atlasBackingWithBytes:(const void *)arg1 length:(NSUInteger)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(BOOL)arg3;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2;
// property(readonly, nonatomic) struct CLKUIAtlasBackingStructure structure; // @synthesize structure=_structure;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
@property(nonatomic) unsigned char filter; // @dynamic filter;
@property(nonatomic) unsigned char wrap; // @dynamic wrap;
@property(readonly, nonatomic) BOOL mipmaps;
@property(readonly, nonatomic) unsigned char format; // @dynamic format;
@property(readonly, nonatomic) NSUInteger mipCount;
@property(readonly, nonatomic) NSUInteger bytesPerPixel; // @dynamic bytesPerPixel;
@property(readonly, nonatomic) NSUInteger planeLength; // @dynamic planeLength;
@property(readonly, nonatomic) NSUInteger planes; // @dynamic planes;
@property(readonly, nonatomic) NSUInteger height; // @dynamic height;
@property(readonly, nonatomic) NSUInteger width; // @dynamic width;
@property(readonly, nonatomic) NSUInteger bytesLength; // @dynamic bytesLength;
@property(readonly, nonatomic) const void *bytes; // @dynamic bytes;
- (BOOL)writeToFile:(id)arg1 error:(id )arg2;
//  (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 mmapFile:(id)arg3;
//  (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 data:(id)arg3;

@end

