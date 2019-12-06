//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFNaming-Protocol.h>

@class NSMeasurement, NSString;

@interface WFWeatherAirQualityPollutant : NSObject <WFNaming, NSSecureCoding, NSCopying>
{
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSMeasurement *_concentration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSMeasurement *concentration; // @synthesize concentration=_concentration;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)initWithAirPollutant:(id)arg1;

@end

