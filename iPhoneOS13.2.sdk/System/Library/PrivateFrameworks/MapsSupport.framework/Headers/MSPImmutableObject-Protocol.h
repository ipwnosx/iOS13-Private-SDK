//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPIdentifiable-Protocol.h>

@class Protocol;

@protocol MSPImmutableObject <MSPIdentifiable, NSMutableCopying>
+ (Protocol *)mutableObjectProtocol;
+ (Class)mutableObjectClass;
- (id)mutableCopy;
@end

