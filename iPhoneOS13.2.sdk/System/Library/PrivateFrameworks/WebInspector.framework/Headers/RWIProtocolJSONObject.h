//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolJSONObject : NSObject
{
    RefPtr_568d2869 _object;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (RefPtr_7a6ac2d3)JSONArrayForKey:(id)arg1;
- (void)setJSONArray:(RefPtr_7a6ac2d3 )arg1 forKey:(id)arg2;
- (void)removeKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (RefPtr_568d2869)toJSONObject;
// - (id)initWithJSONObject:(const struct Object )arg1;
- (id)init;

@end

