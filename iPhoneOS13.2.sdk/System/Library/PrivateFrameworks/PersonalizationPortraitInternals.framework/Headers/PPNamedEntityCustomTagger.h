//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _PASLock;

@interface PPNamedEntityCustomTagger : NSObject
{
    _PASLock *_lock;
    NSDictionary *_categoryMapping;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateNamedEntitiesInText:(id)arg1 range:(NSRange *)arg2 addNamedEntity:(CDUnknownBlockType)arg3;
- (void)enumerateNamedEntitiesInText:(id)arg1 addNamedEntity:(CDUnknownBlockType)arg2;
- (id)init;

@end

