//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLSignedInfo : SAMLBaseElement
{
}

+ (id)createElement:(id )arg1;
@property(readonly, nonatomic) NSArray *references;
@property(readonly, nonatomic) NSString *signatureMethod;
@property(readonly, nonatomic) NSNumber *signatureMethodLength;
@property(readonly, nonatomic) NSString *canonicalizationMethod;
@property(readonly, nonatomic) NSString *identifier;
//  (struct _xmlNode )xmlNode:(id )arg1;

@end

