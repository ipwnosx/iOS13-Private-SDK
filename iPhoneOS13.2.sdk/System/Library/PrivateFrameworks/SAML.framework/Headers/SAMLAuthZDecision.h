//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSString, SAMLEvidence;

__attribute__((visibility("hidden")))
@interface SAMLAuthZDecision : SAMLBaseElement
{
}

+ (id)createElement:(id )arg1;
@property(readonly, nonatomic) SAMLEvidence *evidence;
@property(readonly, nonatomic) NSArray *actions;
@property(readonly, nonatomic) NSString *resource;
@property(readonly, nonatomic) NSString *decision;

@end

