//
//  NSString+Addtions.h
//
//  Created by Roselifeye on 14-5-6.
//  Copyright (c) 2014年 Roselifeye. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Addtions)

//  Get the document path.
+ (NSString *)getDocumentDirectory;

//  Get the app version.
+ (NSString *)getAppVersion;

//  Get the app build version.
+ (NSString *)getBuildVersion;

//  Distinguish the string value is email format or not.
- (BOOL)isEmail;

/**
 *  Distinguish the string value is phone number format or not.
 *  PS: In this function, the length of the phone number is only 11.
 */
- (BOOL)isPhoneNumber;

@end
