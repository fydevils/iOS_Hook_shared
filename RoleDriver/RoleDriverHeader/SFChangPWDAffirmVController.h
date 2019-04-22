//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface SFChangPWDAffirmVController : UIViewController <UITextFieldDelegate>
{
    NSString *_oldPassword;
    UITextField *_passwordTextField;
    UIButton *_nextBtn;
}

@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(copy, nonatomic) NSString *oldPassword; // @synthesize oldPassword=_oldPassword;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setPWDToServer;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFiedTextDidChanged:(id)arg1;
- (void)nextButtonClick;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)passRightAction:(id)arg1;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
