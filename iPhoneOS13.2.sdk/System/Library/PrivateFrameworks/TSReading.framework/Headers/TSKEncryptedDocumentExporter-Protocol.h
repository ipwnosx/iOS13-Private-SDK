//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKExporter-Protocol.h>

@class NSString;

@protocol TSKEncryptedDocumentExporter <TSKExporter>
- (void)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@optional
- (void)setCopyPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
- (void)setPrintPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
@end

