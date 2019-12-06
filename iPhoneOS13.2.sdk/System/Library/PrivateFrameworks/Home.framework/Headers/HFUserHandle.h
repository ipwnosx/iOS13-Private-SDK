//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSString;

@interface HFUserHandle : NSObject <NAIdentifiable>
{
    NSString *_userID;
    NSUInteger _type;
}

+ (id)na_identity;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(NSUInteger)arg1 userID:(id)arg2;
- (id)init;

@end

