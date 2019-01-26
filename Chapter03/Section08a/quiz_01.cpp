#include <iostream>

int main()
{
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char myArticleFlags = 0;

    // 01-a: Setting the article as VIEWED
    myArticleFlags |= option_viewed;

    // 01-b: Check if article was DELETED
    if (myArticleFlags & option_deleted)
        std::cout << "Article was deleted";
    else
        std::cout << "Article was not deleted";    
    
    // 01-c: Clear the article as FAVORITED
    myArticle &= ~option_favorited;

    return 0;
}