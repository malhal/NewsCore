//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>

@class NSArray, NSString;

@interface FCGroupCancelHandler : NSObject <FCOperationCanceling>
{
    NSArray *_cancelHandlers;
}

+ (id)groupCancelHandlerWithCancelHandlers:(id)arg1;
@property(copy, nonatomic) NSArray *cancelHandlers; // @synthesize cancelHandlers=_cancelHandlers;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancelHandlers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

