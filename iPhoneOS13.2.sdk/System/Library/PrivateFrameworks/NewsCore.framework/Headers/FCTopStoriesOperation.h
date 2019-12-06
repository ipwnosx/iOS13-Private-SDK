//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCForYouConfig, FCTopStoriesOperationResult, NSError;
@protocol FCChannelProviding, FCCoreConfiguration;

@interface FCTopStoriesOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    id <FCChannelProviding> _topStoriesChannel;
    FCTopStoriesOperationResult *_topStoriesResult;
    FCForYouConfig *_forYouConfig;
    NSError *_error;
    id /* CDUnknownBlockType */ _catchUpCompletionHandler;
}

@property(copy) id /* CDUnknownBlockType */ catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) FCForYouConfig *forYouConfig; // @synthesize forYouConfig=_forYouConfig;
@property(retain) FCTopStoriesOperationResult *topStoriesResult; // @synthesize topStoriesResult=_topStoriesResult;
@property(copy) id <FCChannelProviding> topStoriesChannel; // @synthesize topStoriesChannel=_topStoriesChannel;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

