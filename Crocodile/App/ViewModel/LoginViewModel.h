//
// Created by 王斌 on 2018/5/26.
// Copyright (c) 2018 Yamazhiki. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RACCommand;
@class RACSignal;
@class HttpClient;

@interface LoginViewModel : NSObject
@property(nonatomic, retain) NSString *username;
@property(nonatomic, retain) NSString *password;
@property(nonatomic, retain) RACCommand *submitCmd;

@property(readonly) RACSignal *canLogin;

- (instancetype)initWithClient:(HttpClient *)client;

@end