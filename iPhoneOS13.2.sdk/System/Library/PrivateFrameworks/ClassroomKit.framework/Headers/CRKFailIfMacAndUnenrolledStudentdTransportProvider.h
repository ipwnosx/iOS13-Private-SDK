//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@protocol CRKTransportProviding;

@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKTransportProviding> mBaseTransportProvider;
}

// - (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransportProvider:(id)arg1;

@end

