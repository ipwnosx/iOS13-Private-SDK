//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <NSSecureCoding>
{
    NSDate *_arrivalDate;
    NSDate *_expirationDate;
    int _transportType;
    NSData *_handle;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItemHandle:(id)arg1;
- (id)init;

@end

