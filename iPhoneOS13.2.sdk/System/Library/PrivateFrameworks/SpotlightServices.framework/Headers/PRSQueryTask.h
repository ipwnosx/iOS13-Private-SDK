//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDictionary, NSString, PRSSearchFeedback, PRSSearchSession;
@protocol OS_dispatch_queue, PRSSearchQueryHandler;

@interface PRSQueryTask : NSObject <NSSecureCoding>
{
    _Bool _started;
    _Bool _canceled;
    _Bool _webSearch;
    long long _queryId;
    NSDictionary *_category_stats;
    NSDictionary *_server_features;
    NSArray *_parsecCategoryOrder;
    id _representedObject;
    NSString *_keyboardLanguage;
    double _scaleFactor;
    NSString *_queryString;
    unsigned long long _queryIdent;
    PRSSearchFeedback *_feedback;
    id <PRSSearchQueryHandler> _handler;
    NSObject<OS_dispatch_queue> *_queue;
    PRSSearchSession *_session;
    NSString *_fbq;
}

+ (_Bool)supportsSecureCoding;
+ (void)resumeDecoding;
+ (void)suspendDecoding;
+ (void)initialize;
@property _Bool webSearch; // @synthesize webSearch=_webSearch;
@property(retain, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
@property(nonatomic) __weak PRSSearchSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <PRSSearchQueryHandler> handler; // @synthesize handler=_handler;
@property(retain) PRSSearchFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property unsigned long long queryIdent; // @synthesize queryIdent=_queryIdent;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(nonatomic) __weak id representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) NSArray *parsecCategoryOrder; // @synthesize parsecCategoryOrder=_parsecCategoryOrder;
@property(retain, nonatomic) NSDictionary *server_features; // @synthesize server_features=_server_features;
@property(retain, nonatomic) NSDictionary *category_stats; // @synthesize category_stats=_category_stats;
@property long long queryId; // @synthesize queryId=_queryId;
- (id)feedbackQueryIdentifier;
- (void)invalidateHandler;
- (void)cancel;
- (void)resume;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
