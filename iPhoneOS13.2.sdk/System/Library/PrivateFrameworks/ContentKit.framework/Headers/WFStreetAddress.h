//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class CLPlacemark, CNPostalAddress, NSString;

@interface WFStreetAddress : NSObject <WFNaming, WFSerializableContent>
{
    NSString *_addressString;
    NSString *_street;
    CNPostalAddress *_postalAddress;
    CLPlacemark *_placemark;
    NSString *_subLocality;
    NSString *_city;
    NSString *_subAdministrativeArea;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_isoCountryCode;
    NSString *_label;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)streetAddressWithPostalAddress:(id)arg1 label:(id)arg2;
+ (id)streetAddressWithPlacemark:(id)arg1 label:(id)arg2;
+ (id)streetAddressWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 label:(id)arg9;
+ (id)streetAddressWithTextCheckingResult:(id)arg1;
+ (BOOL)stringContainsStreetAddresses:(id)arg1;
+ (id)streetAddressesInString:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
// - (void).cxx_destruct;
- (id)wfSerializedRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *localizedLabel;
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly, nonatomic) NSString *street; // @synthesize street=_street;
@property(readonly, nonatomic) NSString *shortAddressString;
@property(readonly, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 placemark:(id)arg9 formattedAddress:(id)arg10 label:(id)arg11;
- (id)initWithPostalAddress:(id)arg1 placemark:(id)arg2 formattedAddress:(id)arg3 label:(id)arg4;

@end

