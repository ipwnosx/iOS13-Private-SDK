//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface TURoute : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    BOOL _currentlyPicked;
    BOOL _defaultRoute;
    BOOL _receiver;
    BOOL _speaker;
    BOOL _wiredHeadphones;
    BOOL _wiredHeadset;
    BOOL _wirelessHeadset;
    BOOL _airTunes;
    BOOL _carAudio;
    BOOL _guest;
    BOOL _bluetooth;
    BOOL _bluetoothLE;
    BOOL _preferred;
    BOOL _preferredAndActive;
    BOOL _supportsPreferredAndActive;
    BOOL _supportsRelay;
    NSString *_uniqueIdentifier;
    NSString *_name;
    long long _deviceType;
    long long _bluetoothEndpointType;
    NSArray *_identifiersOfOtherConnectedDevices;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsRelay; // @synthesize supportsRelay=_supportsRelay;
@property(copy, nonatomic) NSArray *identifiersOfOtherConnectedDevices; // @synthesize identifiersOfOtherConnectedDevices=_identifiersOfOtherConnectedDevices;
@property(nonatomic) BOOL supportsPreferredAndActive; // @synthesize supportsPreferredAndActive=_supportsPreferredAndActive;
@property(nonatomic, getter=isPreferredAndActive) BOOL preferredAndActive; // @synthesize preferredAndActive=_preferredAndActive;
@property(nonatomic, getter=isPreferred) BOOL preferred; // @synthesize preferred=_preferred;
@property(nonatomic) long long bluetoothEndpointType; // @synthesize bluetoothEndpointType=_bluetoothEndpointType;
@property(nonatomic, getter=isBluetoothLE) BOOL bluetoothLE; // @synthesize bluetoothLE=_bluetoothLE;
@property(nonatomic, getter=isBluetooth) BOOL bluetooth; // @synthesize bluetooth=_bluetooth;
@property(nonatomic, getter=isGuest) BOOL guest; // @synthesize guest=_guest;
@property(nonatomic, getter=isCarAudio) BOOL carAudio; // @synthesize carAudio=_carAudio;
@property(nonatomic, getter=isAirTunes) BOOL airTunes; // @synthesize airTunes=_airTunes;
@property(nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset; // @synthesize wirelessHeadset=_wirelessHeadset;
@property(nonatomic, getter=isWiredHeadset) BOOL wiredHeadset; // @synthesize wiredHeadset=_wiredHeadset;
@property(nonatomic, getter=isWiredHeadphones) BOOL wiredHeadphones; // @synthesize wiredHeadphones=_wiredHeadphones;
@property(nonatomic, getter=isSpeaker) BOOL speaker; // @synthesize speaker=_speaker;
@property(nonatomic, getter=isReceiver) BOOL receiver; // @synthesize receiver=_receiver;
@property(nonatomic, getter=isDefaultRoute) BOOL defaultRoute; // @synthesize defaultRoute=_defaultRoute;
@property(nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked; // @synthesize currentlyPicked=_currentlyPicked;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToRoute:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2;

@end

