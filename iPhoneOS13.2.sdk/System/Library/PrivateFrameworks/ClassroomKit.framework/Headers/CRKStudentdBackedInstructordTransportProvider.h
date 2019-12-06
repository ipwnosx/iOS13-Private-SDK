//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSURL;
@protocol CRKRequestPerformingProtocol;

@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
    NSURL *_classroomAppBundleURL;
}

@property(retain, nonatomic) NSURL *classroomAppBundleURL; // @synthesize classroomAppBundleURL=_classroomAppBundleURL;
@property(retain, nonatomic) id <CRKRequestPerformingProtocol> studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;
// - (void).cxx_destruct;
- (void)fetchTransportOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)init;

@end

