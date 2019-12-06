//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDAV/CoreDAVItem-Protocol.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;

@interface CoreDAVItem : NSObject <CoreDAVItem>
{
    NSString *_name;
    NSString *_nameSpace;
    NSMutableSet *_attributes;
    NSMutableArray *_extraChildItems;
    NSData *_payload;
    BOOL _useCDATA;
}

+ (id)parseRuleCache;
+ (id)copyParseRules;
@property(nonatomic) BOOL useCDATA; // @synthesize useCDATA=_useCDATA;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSMutableArray *extraChildItems; // @synthesize extraChildItems=_extraChildItems;
@property(retain, nonatomic) NSMutableSet *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)generateXMLString;
- (void)parserSuggestsBaseURL:(id)arg1;
- (void)setPayloadAsString:(id)arg1;
- (long long)payloadAsNSInteger;
- (id)payloadAsString;
- (BOOL)validate;
- (void)write:(id)arg1;
- (id)childrenToWrite;
- (void)parserFoundAttributes:(id)arg1;
- (void)parserFoundPayload:(id)arg1;
- (void)parserFoundUnrecognizedElement:(id)arg1;
- (id)copyParseRules;
- (id)hashString;
@property(readonly, copy) NSString *description;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

