//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject
{
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
}

@property(readonly, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 pickFirstOfMultiple:(BOOL)arg2;
- (id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1;
- (id)resolveContact:(id)arg1;
- (id)resolveContactIdentifier:(id)arg1;
- (id)allEmailAndPhoneNumberHandlesForContact:(id)arg1;
- (id)resolveContactFromINPerson:(id)arg1;
- (id)contactWithIdentifier:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;

@end

