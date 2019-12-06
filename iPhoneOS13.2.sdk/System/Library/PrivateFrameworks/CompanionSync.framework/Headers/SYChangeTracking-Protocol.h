//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;
@protocol SYObject;

@protocol SYChangeTracking <NSObject>
- (void)deleteObject:(id <SYObject>)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)updateObject:(id <SYObject>)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)addObject:(id <SYObject>)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)deleteObject:(id <SYObject>)arg1;
- (void)updateObject:(id <SYObject>)arg1;
- (void)addObject:(id <SYObject>)arg1;
@end

