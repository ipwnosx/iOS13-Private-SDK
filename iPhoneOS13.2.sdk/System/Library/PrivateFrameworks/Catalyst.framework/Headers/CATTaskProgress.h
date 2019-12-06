//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSError, NSString, NSUUID;

@interface CATTaskProgress : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    BOOL _isCancelable;
    BOOL _isCanceled;
    NSUUID *_UUID;
    NSUInteger _phase;
    id _resultObject;
    NSError *_error;
    NSDictionary *_userInfo;
    long long _completedUnitCount;
    long long _totalUnitCount;
    NSString *_requestClassName;
}

+ (BOOL)supportsSecureCoding;
+ (Class)classForResultObjectWithRequestClassName:(id)arg1;
+ (void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2;
+ (id)progressForOperation:(id)arg1;
@property(copy, nonatomic) NSString *requestClassName; // @synthesize requestClassName=_requestClassName;
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) BOOL isCancelable; // @synthesize isCancelable=_isCancelable;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id resultObject; // @synthesize resultObject=_resultObject;
@property(nonatomic) NSUInteger phase; // @synthesize phase=_phase;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (void)setProgress:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)progressStateDescription;
@property(readonly, nonatomic) NSUInteger state;
- (id)init;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;

@end

