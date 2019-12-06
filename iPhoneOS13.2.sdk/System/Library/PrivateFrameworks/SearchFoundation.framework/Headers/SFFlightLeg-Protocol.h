//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDate, NSDictionary, NSString, SFAirport;

@protocol SFFlightLeg <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSDate *arrivalGateTime;
@property(copy, nonatomic) NSDate *arrivalRunwayTime;
@property(copy, nonatomic) NSDate *departureRunwayTime;
@property(copy, nonatomic) NSDate *departureGateClosedTime;
@property(copy, nonatomic) NSString *baggageClaim;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SFAirport *divertedAirport;
@property(retain, nonatomic) SFAirport *arrivalAirport;
@property(copy, nonatomic) NSString *arrivalGate;
@property(copy, nonatomic) NSString *arrivalTerminal;
@property(copy, nonatomic) NSDate *arrivalActualTime;
@property(copy, nonatomic) NSDate *arrivalPublishedTime;
@property(retain, nonatomic) SFAirport *departureAirport;
@property(copy, nonatomic) NSString *departureGate;
@property(copy, nonatomic) NSString *departureTerminal;
@property(copy, nonatomic) NSDate *departureActualTime;
@property(copy, nonatomic) NSDate *departurePublishedTime;
@property(nonatomic) int status;
@end

