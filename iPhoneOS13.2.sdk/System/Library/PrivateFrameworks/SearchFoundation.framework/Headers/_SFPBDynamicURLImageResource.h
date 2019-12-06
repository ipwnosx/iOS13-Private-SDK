//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBDynamicURLImageResource-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBDynamicURLImageResource : PBCodable <_SFPBDynamicURLImageResource, NSSecureCoding>
{
    BOOL _supportsResizing;
    _SFPBGraphicalFloat *_pixelWidth;
    _SFPBGraphicalFloat *_pixelHeight;
    NSString *_formatURL;
    NSArray *_imageOptions;
}

@property(copy, nonatomic) NSArray *imageOptions; // @synthesize imageOptions=_imageOptions;
@property(nonatomic) BOOL supportsResizing; // @synthesize supportsResizing=_supportsResizing;
@property(copy, nonatomic) NSString *formatURL; // @synthesize formatURL=_formatURL;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelWidth; // @synthesize pixelWidth=_pixelWidth;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)imageOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)imageOptionsCount;
- (void)addImageOptions:(id)arg1;
- (void)clearImageOptions;
- (id)initWithFacade:(id)arg1;

@end

