//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRCard-Protocol.h>

@class NSArray, NSSet, NSString;

@interface CRBasicCard : NSObject <CRCard>
{
    NSString *_cardIdentifier;
    NSUInteger cardFormat;
    NSArray *_cardSections;
    NSSet *_interactions;
    NSArray *_dismissalCommands;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *dismissalCommands; // @synthesize dismissalCommands=_dismissalCommands;
@property(retain, nonatomic) NSSet *interactions; // @synthesize interactions=_interactions;
@property(retain, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(readonly, nonatomic) NSUInteger cardFormat; // @synthesize cardFormat;
@property(readonly, copy, nonatomic) NSString *cardIdentifier; // @synthesize cardIdentifier=_cardIdentifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) BOOL asynchronous;
- (void)loadCardWithCompletion:(CDUnknownBlockType)arg1;

@end

