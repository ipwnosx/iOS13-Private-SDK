//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFPluginBundle : NSObject
{
    Class _factoryClass;
    id _factoryInstance;
    NSMutableDictionary *_classIdentifiers;
}

@property(retain, nonatomic) NSMutableDictionary *classIdentifiers; // @synthesize classIdentifiers=_classIdentifiers;
@property(retain, nonatomic) id factoryInstance; // @synthesize factoryInstance=_factoryInstance;
@property(retain, nonatomic) Class factoryClass; // @synthesize factoryClass=_factoryClass;
// - (void).cxx_destruct;
- (BOOL)supportsClassIdentifier:(id)arg1 forDomainKey:(id)arg2 groupIdentifier:(id)arg3;
- (void)registerClassIdentifier:(id)arg1 forDomain:(id)arg2 inGroup:(id)arg3;
- (id)init;

@end

