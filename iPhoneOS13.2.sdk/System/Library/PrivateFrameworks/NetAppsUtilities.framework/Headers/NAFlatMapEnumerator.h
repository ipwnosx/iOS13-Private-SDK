//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

__attribute__((visibility("hidden")))
@interface NAFlatMapEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    id /* block */ _map;
}

@property(readonly, copy, nonatomic) id /* block */ map; // @synthesize map=_map;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (id)allObjects;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 map:(id /* block */)arg2;

@end
