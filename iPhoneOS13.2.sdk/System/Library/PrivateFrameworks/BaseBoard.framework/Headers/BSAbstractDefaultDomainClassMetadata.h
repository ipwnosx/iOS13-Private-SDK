//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSAbstractDefaultDomainClassMetadata : NSObject
{
    NSMutableDictionary *_propertyNameToPropertyMap;
    NSMutableDictionary *_selectorToPropertyMap;
}

@property(retain, nonatomic) NSMutableDictionary *selectorToPropertyMap; // @synthesize selectorToPropertyMap=_selectorToPropertyMap;
@property(retain, nonatomic) NSMutableDictionary *propertyNameToPropertyMap; // @synthesize propertyNameToPropertyMap=_propertyNameToPropertyMap;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end

