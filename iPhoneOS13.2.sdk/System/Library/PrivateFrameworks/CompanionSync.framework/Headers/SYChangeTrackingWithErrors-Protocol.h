//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYChangeTracking-Protocol.h>

@class NSDictionary;
@protocol SYObject;

@protocol SYChangeTrackingWithErrors <SYChangeTracking>
- (BOOL)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3 error:(id )arg4;
- (BOOL)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3 error:(id )arg4;
- (BOOL)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3 error:(id )arg4;
- (BOOL)deleteObject:(id <SYObject>)arg1 error:(id )arg2;
- (BOOL)updateObject:(id <SYObject>)arg1 error:(id )arg2;
- (BOOL)addObject:(id <SYObject>)arg1 error:(id )arg2;
@end

