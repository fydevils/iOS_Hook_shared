//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SFCustomTaskTypeControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, SFCustomizeTaskModel, SFDepartmentModel, SFPlaceHolderTextView, UIButton, UILabel, UIScrollView, UITextField, UIView;
@protocol SFAddCustomTaskViewControllerDelegate;

@interface SFAddCustomTaskViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate, SFCustomTaskTypeControllerDelegate>
{
    _Bool _isDelete;
    id <SFAddCustomTaskViewControllerDelegate> _delegate;
    SFCustomizeTaskModel *_taskModel;
    UIScrollView *_contentScrollView;
    UIView *_mustShadowView;
    UILabel *_taskType;
    UIButton *_taskTypeBtn;
    SFPlaceHolderTextView *_remarkText;
    UIView *_remarkView;
    UITextField *_originCode;
    UIView *_originView;
    UITextField *_destinationCode;
    UIView *_destinationView;
    UITextField *_hours;
    UITextField *_minutes;
    UIView *_consumingView;
    UITextField *_miles;
    UIView *_milesView;
    UIButton *_submitBtn;
    SFDepartmentModel *_originDepart;
    SFDepartmentModel *_destinaDepart;
    long long _taskTypeCode;
    struct CGRect _oldFrame;
}

@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(nonatomic) long long taskTypeCode; // @synthesize taskTypeCode=_taskTypeCode;
@property(retain, nonatomic) SFDepartmentModel *destinaDepart; // @synthesize destinaDepart=_destinaDepart;
@property(retain, nonatomic) SFDepartmentModel *originDepart; // @synthesize originDepart=_originDepart;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) UIView *milesView; // @synthesize milesView=_milesView;
@property(retain, nonatomic) UITextField *miles; // @synthesize miles=_miles;
@property(retain, nonatomic) UIView *consumingView; // @synthesize consumingView=_consumingView;
@property(retain, nonatomic) UITextField *minutes; // @synthesize minutes=_minutes;
@property(retain, nonatomic) UITextField *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) UIView *destinationView; // @synthesize destinationView=_destinationView;
@property(retain, nonatomic) UITextField *destinationCode; // @synthesize destinationCode=_destinationCode;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) UITextField *originCode; // @synthesize originCode=_originCode;
@property(retain, nonatomic) UIView *remarkView; // @synthesize remarkView=_remarkView;
@property(retain, nonatomic) SFPlaceHolderTextView *remarkText; // @synthesize remarkText=_remarkText;
@property(retain, nonatomic) UIButton *taskTypeBtn; // @synthesize taskTypeBtn=_taskTypeBtn;
@property(retain, nonatomic) UILabel *taskType; // @synthesize taskType=_taskType;
@property(retain, nonatomic) UIView *mustShadowView; // @synthesize mustShadowView=_mustShadowView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) SFCustomizeTaskModel *taskModel; // @synthesize taskModel=_taskModel;
@property(nonatomic) __weak id <SFAddCustomTaskViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getViewWithTitle:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)checkMustInfo;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateTaskFromServer;
- (void)saveTaskFromServer;
- (void)getDestinaDeptCodeAddress;
- (void)getOriginDeptAddress;
- (id)getCurrentTime;
- (long long)getRunningTime;
- (void)saveSuccess;
- (void)submitBtnAction:(id)arg1;
- (void)customTaskTypeName:(id)arg1 typeCode:(long long)arg2;
- (void)taskTypeBtnAction:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)tapAction:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)getInfoBackView;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

