//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FileProvider/FPCancellable-Protocol.h>

@interface NSProgress (FPAdditions) <FPCancellable>
- (void)fp_addChildProgress:(id)arg1;
- (BOOL)fp_isOfFileOperationKind:(id)arg1;
- (void)fp_setFileOperationKind:(id)arg1;
- (id)fp_fileOperationKind;
@end

