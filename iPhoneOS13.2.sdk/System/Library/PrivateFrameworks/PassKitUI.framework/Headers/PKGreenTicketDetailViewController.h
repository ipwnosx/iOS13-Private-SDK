//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTransitTicketDetailViewController.h>

#import <PassKitUI/PKTransitTicketDetailDataSource-Protocol.h>

@class PKFelicaPassProperties;

@interface PKGreenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>
{
    PKFelicaPassProperties *_properties;
}

@property(readonly, nonatomic) PKFelicaPassProperties *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
- (id)transitTicketDetailValueForRow:(NSUInteger)arg1 leg:(NSUInteger)arg2;
- (id)transitTicketDetailTitleForRow:(NSUInteger)arg1 leg:(NSUInteger)arg2;
- (long long)transitTicketDetailNumberOfRowsForLeg:(NSUInteger)arg1;
- (id)titleForLeg:(NSUInteger)arg1;
- (NSUInteger)numberOfLegs;
- (id)initWithFelicaProperty:(id)arg1;

@end

