//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData, NSMutableData;

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation
{
    NSData *_signatureData;
    NSMutableData *_data;
    id /* block */ _responseHandler;
}

@property(copy, nonatomic) id /* block */ responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
- (void)finishWithSAPContextPreparationError:(id)arg1;
- (void)executeWithSAPContext:(id)arg1;

@end
