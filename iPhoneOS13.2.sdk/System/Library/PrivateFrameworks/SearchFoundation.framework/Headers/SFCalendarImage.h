//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

#import <SearchFoundation/SFCalendarImage-Protocol.h>

@class NSData, NSDate, NSDictionary;

@interface SFCalendarImage : SFImage <SFCalendarImage, NSSecureCoding, NSCopying>
{
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

