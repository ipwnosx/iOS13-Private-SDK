//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BRUITestDiagnostic : NSObject
{
    NSString *_outputDirectoryPath;
    NSMutableDictionary *_diagnosticDataBySectionName;
}

// - (void).cxx_destruct;
- (BOOL)writeToDiskWithError:(id )arg1;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2 sectionName:(id)arg3;
- (void)addDiagnosticData:(id)arg1 forFilename:(id)arg2;
- (id)initWithOutputDirectoryPath:(id)arg1;

@end

