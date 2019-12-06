//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNConfiguration : NSObject
{
    NSString *_name;
    NSString *_username;
    NSString *_password;
    NSString *_proxyServer;
    NSNumber *_proxyPort;
    NSString *_authenticationType;
    NSNumber *_defaultProtocolMask;
    NSNumber *_allowedProtocolMask;
    NSNumber *_allowedProtocolMaskInRoaming;
    NSNumber *_allowedProtocolMaskInDomesticRoaming;
}

@property(retain, nonatomic) NSNumber *allowedProtocolMaskInDomesticRoaming; // @synthesize allowedProtocolMaskInDomesticRoaming=_allowedProtocolMaskInDomesticRoaming;
@property(retain, nonatomic) NSNumber *allowedProtocolMaskInRoaming; // @synthesize allowedProtocolMaskInRoaming=_allowedProtocolMaskInRoaming;
@property(retain, nonatomic) NSNumber *allowedProtocolMask; // @synthesize allowedProtocolMask=_allowedProtocolMask;
@property(retain, nonatomic) NSNumber *defaultProtocolMask; // @synthesize defaultProtocolMask=_defaultProtocolMask;
@property(retain, nonatomic) NSString *authenticationType; // @synthesize authenticationType=_authenticationType;
@property(retain, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)localizedAuthenticationType;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 outError:(id )arg2;

@end

