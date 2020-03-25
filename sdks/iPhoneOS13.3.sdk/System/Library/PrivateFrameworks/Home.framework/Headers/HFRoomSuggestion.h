//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface HFRoomSuggestion : NSObject
{
    NSString *_name;
    NSSet *_aliases;
    long long _priority;
}

+ (id /* CDUnknownBlockType */)priorityComparator;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSSet *aliases; // @synthesize aliases=_aliases;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;

@end
