//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject
{
    NSDictionary *_stateDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *stateDictionary; // @synthesize stateDictionary=_stateDictionary;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

