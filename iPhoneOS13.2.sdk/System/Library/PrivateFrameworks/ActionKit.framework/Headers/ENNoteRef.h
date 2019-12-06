//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFSerializableContent-Protocol.h>

@class ENLinkedNotebookRef, NSString;

@interface ENNoteRef : NSObject <WFSerializableContent, NSCoding, NSCopying>
{
    long long _type;
    NSString *_guid;
    ENLinkedNotebookRef *_linkedNotebook;
}

+ (id)noteRefFromData:(id)arg1;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(retain, nonatomic) ENLinkedNotebookRef *linkedNotebook; // @synthesize linkedNotebook=_linkedNotebook;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)asData;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)wfSerializedRepresentation;

@end

