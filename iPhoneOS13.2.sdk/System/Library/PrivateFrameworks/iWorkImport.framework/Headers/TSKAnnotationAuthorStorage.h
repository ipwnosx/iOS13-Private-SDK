//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface TSKAnnotationAuthorStorage : TSPObject
{
    NSMutableSet *_mutableAuthors;
}

@property(retain, nonatomic) NSMutableSet *mutableAuthors; // @synthesize mutableAuthors=_mutableAuthors;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (unsigned int)delayedArchivingPriority;
- (BOOL)shouldDelayArchiving;
- (id)description;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (id)currentAuthorColorWithKey:(id)arg1;
- (long long)indexForColorKey:(id)arg1 usedColors:(id)arg2;
- (BOOL)p_withToleranceDoesColorSet:(id)arg1 containColor:(id)arg2;
- (long long)p_hashCodeForColorKey:(id)arg1;
- (id)nextAuthorColor;
- (id)authorInStorageAddingAuthorIfNecessary:(id)arg1;
- (id)authorInStorageMatchingAuthor:(id)arg1;
- (id)preferredAuthorMatchingPrivateID:(id)arg1 name:(id)arg2;
- (id)authorsMatchingPrivateID:(id)arg1;
@property(readonly) NSSet *authors;
- (void)removeAuthor:(id)arg1;
- (void)addAuthor:(id)arg1;

@end

