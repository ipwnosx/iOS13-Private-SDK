//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, ML3MusicLibrary, NSMutableArray;

@interface ML3EntityReplacer : NSObject
{
//    struct __CFDictionary _propertyToIndexPair;
    NSMutableArray *_naturalStatements;
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
}

// - (void).cxx_destruct;
- (void)close;
- (void)clearBindings;
- (void)bindPersistentID:(long long)arg1;
@property(readonly, nonatomic, getter=isOpen) BOOL open;
- (BOOL)perform;
- (void)bindValue:(id)arg1 forProperty:(id)arg2;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3;
- (void)dealloc;

@end

