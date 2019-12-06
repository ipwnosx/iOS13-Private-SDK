//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/OSActivityStreamDelegate-Protocol.h>
#import <CloudKitDaemon/OSLogPersistenceDelegate-Protocol.h>

@class NSDate, NSMutableArray, NSString, OSActivityStream, OSLogPersistence;

@interface CKLLog : NSObject <OSLogPersistenceDelegate, OSActivityStreamDelegate>
{
    BOOL _wantsSimulatorLogs;
    BOOL _colorOutput;
    double _startTimeOffset;
    NSDate *_absoluteStartDate;
    NSString *_processName;
    NSUInteger _source;
    OSLogPersistence *_archiveSource;
    OSActivityStream *_streamSource;
    NSMutableArray *_streamObservers;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSMutableArray *streamObservers; // @synthesize streamObservers=_streamObservers;
@property(retain, nonatomic) OSActivityStream *streamSource; // @synthesize streamSource=_streamSource;
@property(retain, nonatomic) OSLogPersistence *archiveSource; // @synthesize archiveSource=_archiveSource;
@property(nonatomic) NSUInteger source; // @synthesize source=_source;
@property(nonatomic) BOOL colorOutput; // @synthesize colorOutput=_colorOutput;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSDate *absoluteStartDate; // @synthesize absoluteStartDate=_absoluteStartDate;
@property(nonatomic) double startTimeOffset; // @synthesize startTimeOffset=_startTimeOffset;
@property(nonatomic) BOOL wantsSimulatorLogs; // @synthesize wantsSimulatorLogs=_wantsSimulatorLogs;
// - (void).cxx_destruct;
- (void)streamDidStop:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (BOOL)activityStream:(id)arg1 results:(id)arg2;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)streamLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addStreamObserver:(id)arg1;
- (id)initWithArchiveAtURL:(id)arg1;
- (id)initWithRemoteDevice:(id)arg1;
- (id)initForHostStream;
- (void)_configureStreamSource:(id)arg1;
- (id)_init;

@end

