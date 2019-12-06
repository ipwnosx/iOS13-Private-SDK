//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CSSpeakerModel : NSObject
{
    NSString *_modelFileName;
    NSString *_languageCode;
    NSString *_modelPath;
    NSString *_utteranceDirectory;
    NSString *_tdtiModelPath;
    NSString *_tdtiUtteranceDirectory;
    NSString *_tiModelPath;
    NSString *_tiUtteranceDirectory;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)discard;
@property(readonly, nonatomic) BOOL needsRetrain;
- (BOOL)_isDirectoryEmpty:(id)arg1;
@property(readonly, nonatomic) NSArray *enrollmentUtterance;
@property(readonly, nonatomic) NSString *tiUtteranceDirectory;
@property(readonly, nonatomic) NSString *tdtiUtteranceDirectory;
@property(readonly, nonatomic) NSString *utteranceDirectory;
@property(readonly, nonatomic) NSString *tdtiModelPath;
@property(readonly, nonatomic) NSString *tiModelPath;
@property(readonly, nonatomic) NSString *modelPath;
- (id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2;

@end

