//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalLogFormatter-Protocol.h>

@class NSDateFormatter;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter>
{
    BOOL _includeFunction;
    BOOL _includeLevel;
    BOOL _includeLogName;
    BOOL _includeMessage;
    BOOL _includeProcessID;
    BOOL _includeProcessName;
    BOOL _includeMachPort;
    BOOL _includeTimestamp;
    BOOL _includeEnvelopePartNames;
    BOOL _useTinyEnvelopePartNames;
    BOOL _useCompactForm;
    BOOL _usePrettyTimestamp;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) BOOL usePrettyTimestamp; // @synthesize usePrettyTimestamp=_usePrettyTimestamp;
@property(nonatomic) BOOL useCompactForm; // @synthesize useCompactForm=_useCompactForm;
@property(nonatomic) BOOL useTinyEnvelopePartNames; // @synthesize useTinyEnvelopePartNames=_useTinyEnvelopePartNames;
@property(nonatomic) BOOL includeEnvelopePartNames; // @synthesize includeEnvelopePartNames=_includeEnvelopePartNames;
@property(nonatomic) BOOL includeTimestamp; // @synthesize includeTimestamp=_includeTimestamp;
@property(nonatomic) BOOL includeMachPort; // @synthesize includeMachPort=_includeMachPort;
@property(nonatomic) BOOL includeProcessName; // @synthesize includeProcessName=_includeProcessName;
@property(nonatomic) BOOL includeProcessID; // @synthesize includeProcessID=_includeProcessID;
@property(nonatomic) BOOL includeMessage; // @synthesize includeMessage=_includeMessage;
@property(nonatomic) BOOL includeLogName; // @synthesize includeLogName=_includeLogName;
@property(nonatomic) BOOL includeLevel; // @synthesize includeLevel=_includeLevel;
@property(nonatomic) BOOL includeFunction; // @synthesize includeFunction=_includeFunction;
// - (void).cxx_destruct;
- (id)newFormattedString:(id)arg1;
- (id)init;

@end

