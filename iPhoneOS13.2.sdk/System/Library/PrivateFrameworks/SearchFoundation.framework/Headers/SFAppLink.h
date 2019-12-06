//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFAppLink-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying>
{
   struct {
        unsigned int imageAlign:1;
    } _has;
    int _imageAlign;
    NSString *_title;
    SFPunchout *_appPunchout;
    SFImage *_image;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(retain, nonatomic) SFPunchout *appPunchout; // @synthesize appPunchout=_appPunchout;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasImageAlign;
- (id)initWithProtobuf:(id)arg1;

@end

