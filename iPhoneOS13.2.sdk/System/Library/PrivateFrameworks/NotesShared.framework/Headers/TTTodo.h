//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID;

@interface TTTodo : NSObject <NSCopying>
{
    BOOL _done;
    NSUUID *_uuid;
}

+ (id)todoWithIdentifier:(id)arg1 done:(BOOL)arg2;
@property(readonly, nonatomic) BOOL done; // @synthesize done=_done;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)todoWithDone:(BOOL)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 done:(BOOL)arg2;
- (id)serialize;
//  (void)saveToArchive:(struct Todo )arg1;
//  (id)initWithArchive:(const struct Todo )arg1;
- (id)initWithData:(id)arg1;

@end

