//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface EMMessageChangeAction : NSObject <NSSecureCoding>
{
    NSArray *_objectIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *objectIDs; // @synthesize objectIDs=_objectIDs;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long signpostType;
- (id)initWithMessageListItems:(id)arg1;

@end

