//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFLoggableObject-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class WFFileType;

@interface NSDictionary (WFLoggableObject) <WFLoggableObject, WFPropertyListObject, WFJavaScriptCoreBridgeableObject, WFSerializableContent, WFJSONObject>
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) NSDictionary *propertiesForEventLogging;
@property(retain, nonatomic) WFFileType *wf_preferredFileType;
- (id)wfSerializedRepresentation;
- (id)wf_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)wfObjectOfClass:(Class)arg1 forKeyPath:(id)arg2;
- (id)wfObjectOfClass:(Class)arg1 forKey:(id)arg2;
@end

