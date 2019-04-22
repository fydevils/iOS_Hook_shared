//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface SFSetPwdVC : UIViewController <UITextFieldDelegate>
{
    UITextField *_accountTextField;
    UITextField *_passwordTextField;
    UITextField *_securityCodeTextField;
    UIButton *_nextBtn;
}

@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UITextField *securityCodeTextField; // @synthesize securityCodeTextField=_securityCodeTextField;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UITextField *accountTextField; // @synthesize accountTextField=_accountTextField;
- (void).cxx_destruct;
- (void)textFiedTextDidChanged:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)nextButtonClick;
- (void)openCountdown:(double)arg1 btn:(id)arg2;
- (void)getSecurityCode:(id)arg1;
- (void)passRightAction:(id)arg1;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
