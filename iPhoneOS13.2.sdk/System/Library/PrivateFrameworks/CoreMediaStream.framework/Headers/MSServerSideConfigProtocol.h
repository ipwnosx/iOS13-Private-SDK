//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject
{
    id <MSServerSideConfigProtocolDelegate> _delegate;
    NSString *_personID;
    NSURL *_configURL;
    struct __MSSSCPCContext {
//         struct __MSSPCContext _super;
        /* void * CDUnknownFunctionPointerType didFinishCallback */;
        /* void * CDUnknownFunctionPointerType didFailAuthenticationCallback */;
    } _context;
}

@property(nonatomic) id <MSServerSideConfigProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
// - (void).cxx_destruct;
- (void)_didFailAuthenticationWithError:(id)arg1;
- (void)_didFinishWithResponse:(id)arg1 error:(id)arg2;
- (void)abort;
- (void)queryConfiguration;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

@end

