//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface NSDate (WFNaming) <WFNaming, WFPropertyListObject, WFSerializableContent>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wfSerializedRepresentation;
- (id)wf_formattedStringWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includeTimeForISO8601:(BOOL)arg5;
@end

