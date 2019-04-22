//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TPKeyboardAvoidingScrollView, UIButton, UITextField;
@protocol SFSettingPasswordVCDelegate;

@interface SFSettingPasswordVC : UIViewController <UITextFieldDelegate>
{
    id <SFSettingPasswordVCDelegate> _delegate;
    TPKeyboardAvoidingScrollView *_contentScrollView;
    UITextField *_passwordTextField;
    UIButton *_doneBtn;
}

@property(retain, nonatomic) UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) TPKeyboardAvoidingScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id <SFSettingPasswordVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doneAction;
- (void)passRightAction:(id)arg1;
- (void)passAction;
- (struct CGSize)caculateText:(id)arg1 fontSize:(double)arg2 maxSize:(struct CGSize)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldChange:(id)arg1;
- (void)setupUI;
- (void)addRightPassButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

