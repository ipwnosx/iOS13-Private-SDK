//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMLSInput-Protocol.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput>
{
    BOOL _certifiedText;
    id _byteStream;
    NSString *_stringData;
    NSString *_encoding;
}

@property(nonatomic) BOOL certifiedText; // @synthesize certifiedText=_certifiedText;
@property(retain, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *stringData; // @synthesize stringData=_stringData;
@property(retain, nonatomic) id byteStream; // @synthesize byteStream=_byteStream;
// - (void).cxx_destruct;

@end

