//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SFProgressViewDelegate-Protocol.h"

@class NSString;

@interface SFShowBarCodeImageView : UIView <SFProgressViewDelegate>
{
    UIView *_codeView;
}

@property(retain, nonatomic) UIView *codeView; // @synthesize codeView=_codeView;
- (void).cxx_destruct;
- (void)close;
- (id)getVehicleNumWithVehicle:(id)arg1;
- (id)appRootViewController;
- (void)show;
- (void)SFProgressViewDismiss:(id)arg1;
- (void)tapAction;
- (id)initWithRequireId:(id)arg1;
- (id)initWithBarCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

