//
//  StackOverflowCommunicator.h
//  BrowseOverflow
//
//  Created by Graham J Lee on 17/03/2011.
//  Copyright 2011 Fuzzy Aliens Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface StackOverflowCommunicator : NSObject {
@protected
    NSURL *fetchingURL;
    NSURLConnection *fetchingConnection;
}

- (void)searchForQuestionsWithTag: (NSString *)tag;
- (void)downloadInformationForQuestionWithID: (NSInteger)identifier;
- (void)downloadAnswersToQuestionWithID: (NSInteger)identifier;

@end
