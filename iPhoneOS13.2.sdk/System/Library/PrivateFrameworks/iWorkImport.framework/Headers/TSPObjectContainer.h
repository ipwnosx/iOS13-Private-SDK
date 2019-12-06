//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPObjectContainer : TSPObject
{
    unsigned char _packageIdentifier;
    NSArray *_childObjects;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1;
@property(readonly, nonatomic) NSArray *childObjects; // @synthesize childObjects=_childObjects;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;
- (unsigned int)delayedArchivingPriority;
- (BOOL)shouldDelayArchiving;
- (id)packageLocator;
- (long long)tsp_identifier;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (id)initWithContext:(id)arg1;

@end

