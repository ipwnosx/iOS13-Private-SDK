//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, OCPPackage, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackagePart : NSObject
{
    NSURL *mLocation;
    OCPPackageRelationshipCollection *mRelationships;
//    struct _xmlDoc mDocument;
    NSMutableDictionary *mAlternateContentMap;
    OCPPackage *mPackage;
}

@property(readonly) __weak OCPPackage *package; // @synthesize package=mPackage;
// - (void).cxx_destruct;
//  (void)setFallbackNode:(struct _xmlNode )arg1 forChoiceNode:(struct _xmlNode )arg2;
//  (struct _xmlNode )fallbackNodeForChoiceNode:(struct _xmlNode )arg1;
- (id)contentType;
- (id)firstPartWithRelationshipOfType:(id)arg1;
- (id)relationshipsByType:(id)arg1;
- (id)relationshipForIdentifier:(id)arg1;
//  (struct _xmlTextReader )xmlReader;
//  (struct _xmlDoc )xmlDocument;
- (void)copyToFile:(id)arg1;
- (id)data;
- (id)location;
- (void)dealloc;
//  (id)initWithLocation:(id)arg1 relationshipsXml:(struct _xmlDoc )arg2 package:(id)arg3;

@end

