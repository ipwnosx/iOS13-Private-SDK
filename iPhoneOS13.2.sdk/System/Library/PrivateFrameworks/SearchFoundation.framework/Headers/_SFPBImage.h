//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBImage-Protocol.h>

@class NSData, NSString, _SFPBAppIconImage, _SFPBCalendarImage, _SFPBContactImage, _SFPBGraphicalFloat, _SFPBLocalImage, _SFPBMediaArtworkImage, _SFPBMonogramImage, _SFPBPointSize, _SFPBURLImage;

@interface _SFPBImage : PBCodable <_SFPBImage, NSSecureCoding>
{
    BOOL _isTemplate;
    BOOL _shouldCropToCircle;
    int _source;
    int _type;
    NSData *_imageData;
    _SFPBGraphicalFloat *_cornerRadius;
    _SFPBGraphicalFloat *_scale;
    _SFPBPointSize *_size;
    NSString *_contentType;
    NSString *_keyColor;
    NSString *_identifier;
    _SFPBURLImage *_urlImage;
    _SFPBContactImage *_contactImage;
    _SFPBMonogramImage *_monogramImage;
    _SFPBLocalImage *_localImage;
    _SFPBAppIconImage *_appIconImage;
    _SFPBMediaArtworkImage *_mediaArtworkImage;
    _SFPBCalendarImage *_calendarImage;
}

@property(retain, nonatomic) _SFPBCalendarImage *calendarImage; // @synthesize calendarImage=_calendarImage;
@property(retain, nonatomic) _SFPBMediaArtworkImage *mediaArtworkImage; // @synthesize mediaArtworkImage=_mediaArtworkImage;
@property(retain, nonatomic) _SFPBAppIconImage *appIconImage; // @synthesize appIconImage=_appIconImage;
@property(retain, nonatomic) _SFPBLocalImage *localImage; // @synthesize localImage=_localImage;
@property(retain, nonatomic) _SFPBMonogramImage *monogramImage; // @synthesize monogramImage=_monogramImage;
@property(retain, nonatomic) _SFPBContactImage *contactImage; // @synthesize contactImage=_contactImage;
@property(retain, nonatomic) _SFPBURLImage *urlImage; // @synthesize urlImage=_urlImage;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *keyColor; // @synthesize keyColor=_keyColor;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) _SFPBPointSize *size; // @synthesize size=_size;
@property(retain, nonatomic) _SFPBGraphicalFloat *scale; // @synthesize scale=_scale;
@property(retain, nonatomic) _SFPBGraphicalFloat *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL shouldCropToCircle; // @synthesize shouldCropToCircle=_shouldCropToCircle;
@property(nonatomic) BOOL isTemplate; // @synthesize isTemplate=_isTemplate;
@property(copy) NSData *imageData; // @synthesize imageData=_imageData;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end

