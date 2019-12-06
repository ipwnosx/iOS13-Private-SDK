//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFPin-Protocol.h>

@class NSData, NSDictionary, NSString, SFColor, SFLatLng;

@interface SFPin : NSObject <SFPin, NSSecureCoding, NSCopying>
{
   struct {
        unsigned int pinBehavior:1;
    } _has;
    int _pinBehavior;
    SFLatLng *_location;
    SFColor *_pinColor;
    NSString *_label;
    NSString *_resultID;
    NSData *_mapsData;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property(copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *resultID; // @synthesize resultID=_resultID;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) SFColor *pinColor; // @synthesize pinColor=_pinColor;
@property(retain, nonatomic) SFLatLng *location; // @synthesize location=_location;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasPinBehavior;
- (id)initWithProtobuf:(id)arg1;

@end

