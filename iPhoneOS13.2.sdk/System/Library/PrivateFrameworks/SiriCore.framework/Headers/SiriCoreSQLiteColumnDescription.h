//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface SiriCoreSQLiteColumnDescription : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_type;
    NSArray *_constraints;
}

+ (id)uniqueTextColumnWithName:(id)arg1;
+ (id)integerPrimaryKeyColumnWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 constraintsProvider:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 type:(id)arg2 constraints:(id)arg3;

@end

