//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSString, NSURL;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding>
{
    NSURL *_cidURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *cidURL; // @synthesize cidURL=_cidURL;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *attachmentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCIDURL:(id)arg1;

@end

