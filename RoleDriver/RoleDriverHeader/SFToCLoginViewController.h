//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFToCBaseVC.h"

#import "SFChooseRegionViewDelegate-Protocol.h"
#import "SFSettingPasswordVCDelegate-Protocol.h"
#import "SFToCLoginSwitchViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SFToCLoginSwitchView, UIButton, UIImageView, UILabel, UITextField, UITextView, UIView;
@protocol SFToCLoginViewControllerDelegate;

@interface SFToCLoginViewController : SFToCBaseVC <UITextFieldDelegate, SFSettingPasswordVCDelegate, SFChooseRegionViewDelegate, SFToCLoginSwitchViewDelegate, UITextViewDelegate>
{
    _Bool _isPasswordMode;
    _Bool _isPhoneChange;
    _Bool _isPasswordChange;
    _Bool _isIntervalMode;
    _Bool _isRegionTypeChange;
    id <SFToCLoginViewControllerDelegate> _delegate;
    unsigned long long _loginStatus;
    SFToCLoginSwitchView *_switchView;
    UITextField *_phoneNumField;
    UITextField *_verificationCodeField;
    UIButton *_loginButton;
    UILabel *_getCodeLabel;
    UITextView *_bottomLabel;
    UILabel *_switchLogonModeLabel;
    UIView *_passwordView;
    UITextField *_passwordTextField;
    UIView *_topBgView;
    UIImageView *_icon;
    UITextField *_accountTextField;
    UITextField *_intervalPassWordField;
    UIView *_intervalView;
    UIButton *_selectRegionBtn;
    long long _regionType;
    UILabel *_activationLabel;
    UILabel *_forgetPasswordLabel;
    UIView *_coverView;
    NSString *_changedPassword;
}

@property(copy, nonatomic) NSString *changedPassword; // @synthesize changedPassword=_changedPassword;
@property(nonatomic) _Bool isRegionTypeChange; // @synthesize isRegionTypeChange=_isRegionTypeChange;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UILabel *forgetPasswordLabel; // @synthesize forgetPasswordLabel=_forgetPasswordLabel;
@property(retain, nonatomic) UILabel *activationLabel; // @synthesize activationLabel=_activationLabel;
@property(nonatomic) long long regionType; // @synthesize regionType=_regionType;
@property(retain, nonatomic) UIButton *selectRegionBtn; // @synthesize selectRegionBtn=_selectRegionBtn;
@property(nonatomic) _Bool isIntervalMode; // @synthesize isIntervalMode=_isIntervalMode;
@property(retain, nonatomic) UIView *intervalView; // @synthesize intervalView=_intervalView;
@property(retain, nonatomic) UITextField *intervalPassWordField; // @synthesize intervalPassWordField=_intervalPassWordField;
@property(retain, nonatomic) UITextField *accountTextField; // @synthesize accountTextField=_accountTextField;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isPasswordChange; // @synthesize isPasswordChange=_isPasswordChange;
@property(nonatomic) _Bool isPhoneChange; // @synthesize isPhoneChange=_isPhoneChange;
@property(retain, nonatomic) UIView *topBgView; // @synthesize topBgView=_topBgView;
@property(nonatomic) _Bool isPasswordMode; // @synthesize isPasswordMode=_isPasswordMode;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UIView *passwordView; // @synthesize passwordView=_passwordView;
@property(retain, nonatomic) UILabel *switchLogonModeLabel; // @synthesize switchLogonModeLabel=_switchLogonModeLabel;
@property(retain, nonatomic) UITextView *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *getCodeLabel; // @synthesize getCodeLabel=_getCodeLabel;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UITextField *verificationCodeField; // @synthesize verificationCodeField=_verificationCodeField;
@property(retain, nonatomic) UITextField *phoneNumField; // @synthesize phoneNumField=_phoneNumField;
@property(retain, nonatomic) SFToCLoginSwitchView *switchView; // @synthesize switchView=_switchView;
@property(nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;
@property(nonatomic) __weak id <SFToCLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeModel:(long long)arg1;
- (void)selectRegionBtnClick:(id)arg1;
- (void)enterWithRegion:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)reviseButtonClick;
- (void)regButtonClick;
- (void)passSettingPassword;
- (void)getSecurityCodeFromServer;
- (void)intervalLogin;
- (void)loginButtonClick;
- (void)modelChangeAction;
- (void)getCodeAction;
- (void)tapAction;
- (void)passRightAction:(id)arg1;
- (void)backDidClicked;
- (void)switchVerificationCodeOrPasswordMode;
- (void)openCountdown:(double)arg1;
- (void)privacyUrlClick;
- (void)registerUrlClick;
- (void)initBottomView;
- (void)addSwitchLogonModeLabel;
- (void)addVersionLabel;
- (void)setTextFieldNormalWithLastSegmentIndex;
- (void)changeLoginButtonStatus;
- (void)setTextFieldNormal;
- (void)autoLogin:(id)arg1;
- (void)switchInternalOrExternalMode:(unsigned long long)arg1;
- (id)resizeWithImage:(id)arg1 isLeft:(_Bool)arg2;
- (void)toBDriverAutoLogin;
- (void)updateUIByUserInfoConfig;
- (void)initUI;
- (void)createUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
